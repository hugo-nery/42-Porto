from pydantic import BaseModel, Field
from enum import Enum
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
    crew: list[CrewMember] = Field(ge=1, le=12)
    mission_status: str = "planned"
    budget_millions: float = Field(ge=1.0, le=10000.0)