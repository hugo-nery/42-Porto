from enum import Enum
from pydantic import BaseModel, Field, model_validator, ValidationError
from datetime import datetime


class Rank(Enum):
    cadet = 1
    officer = 2
    lieutenant = 3
    captain = 4
    commander = 5


class CrewMember(BaseModel):
    member_id: str = Field(min_length=3, max_length=10)
    name: str = Field(min_length=2, max_length=50)
    rank: Rank
    age: int = Field(ge=18, le=80)
    specialization: str = Field(min_length=3, max_length=30)
    years_experience: int = Field(ge=0, le=50)
    is_active: bool = True


class SpaceMission(BaseModel):
    mission_id: str = Field(min_length=5, max_length=15)
    mission_name: str = Field(min_length=3, max_length=100)
    destination: str = Field(min_length=3, max_length=50)
    launch_date: datetime
    duration_days: int = Field(ge=1,le=3650)
    crew: list[CrewMember] = Field(min_length=1, max_length=12)
    mission_status: str = "planned"
    budget_millions: float = Field(ge=1.0, le=10000.0)

    @model_validator(mode='after')
    def mission_validation(self):
        error_list: list[str] = []
        if self.mission_id[0] != "M":
            error_list.append("Mission ID must start with 'M'")

        mission_rank_list = [c.rank.name for c in self.crew]
        if Rank.captain.name not in mission_rank_list and Rank.commander.name not in mission_rank_list:
            error_list.append("Must have at least one Commander or Captain")

        if self.duration_days > 365:
            experienced_count: int = 0
            for c in self.crew:
                if c.years_experience >= 5:
                    experienced_count += 1
            if experienced_count < len(self.crew)/2:
                error_list.append("Long missions (> 365 days) need 50%% experienced crew (5+ years)")
        
        for c in self.crew:
            if not c.is_active:
                error_list.append("All crew members must be active")
                break

        if len(error_list) > 0:
            raise ValueError ("\n".join(error_list))
        return self


def print_mission(sm: SpaceMission) -> None:
    print(f"Mission: {sm.mission_name}\n"
          f"ID: {sm.mission_id}\n"
          f"Destination: {sm.destination}\n"
          f"Duration: {sm.duration_days} days\n"
          f"Budget: ${sm.budget_millions}M\n"
          f"Crew size: {len(sm.crew)}\n"
          f"Crew members:")
    for member in sm.crew:
        print(f"- {member.name} ({member.rank.name}) - {member.specialization}")
    print()

def main():
    
    crew_list: list[CrewMember] = []
    try:
        sarah = CrewMember(member_id="001",
                           name="Sarah Connor",
                           rank=Rank.commander,
                           age=35,
                           specialization="Mission Command",
                           years_experience=12,
                           is_active=True)
        crew_list.append(sarah)
        
        john = CrewMember(member_id="002",
                           name="John Smith",
                           rank=Rank.lieutenant,
                           age=27,
                           specialization="Navigation",
                           years_experience=9)
        crew_list.append(john)

        alice = CrewMember(member_id="003",
                           name="Alice Johnson",
                           rank=Rank.officer,
                           age=25,
                           specialization="Engineering",
                           years_experience=5)
        crew_list.append(alice)

        hugo = CrewMember(member_id="007",
                           name="Hugo Nery",
                           rank=Rank.captain,
                           age=34,
                           specialization="Robotics",
                           years_experience=1,
                           is_active=False)
        crew_list.append(hugo)

    except ValidationError as ve:
        for error_dict in ve.errors():
            print(f"{str(error_dict['loc']).strip('(),')} {error_dict['msg']}")

    good_data = {
        "mission_id": "M2024_MARS",
        "mission_name": "Mars Colony Establishment",
        "destination": "Mars",
        "launch_date": "2024-02-20",
        "duration_days": 900,
        "crew": crew_list[:3],
        "budget_millions": 2500
    }

    bad_data = {
        "mission_id": "M2029_MARS",
        "mission_name": "Mars Colony Visit",
        "destination": "Mars",
        "launch_date": "2029-02-20",
        "duration_days": 450,
        "crew": crew_list[1:],
        "budget_millions": 1500
    }

    print("Space Mission Crew Validation")

    try:
        print("=========================================")
        print("Valid mission created:")
        valid_mission = SpaceMission(**good_data)
        print_mission(valid_mission)

        print("=========================================")
        print("Expected validation error:")
        invalid_mission = SpaceMission(**bad_data)
        print_mission(invalid_mission)

    except ValidationError as ve:
        for error_dict in ve.errors():
            print(f"{str(error_dict['loc']).strip('(),')} {(error_dict['msg']).removeprefix('Value error, ')}")
        print()

if __name__=="__main__":
    main()