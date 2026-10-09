from pydantic import BaseModel, Field, ValidationError
from datetime import date


class SpaceStation (BaseModel):
    station_id: str = Field(min_length=3, max_length=10)
    name: str = Field(min_length=1, max_length=50)
    crew_size: int = Field(ge=1, le=20)
    power_level: float = Field(ge=0.0, le=100.0)
    oxygen_level: float = Field(ge=0.0, le=100.0)
    last_maintenance: date
    is_operational: bool = True
    notes: str = Field(None, max_length=200)


def print_station(ss: SpaceStation):
    print(f"ID: {ss.station_id}\n"
          f"Name: {ss.name}\n"
          f"Crew: {ss.crew_size} people\n"
          f"Power: {ss.power_level}%\n"
          f"Oxygen: {ss.oxygen_level}%\n"
          f"Status: {'Operational' if ss.is_operational else 'Off'}\n")


def main():
    
    good_data = {
        "station_id": "ISS001",
        "name": "Internation Space Station",
        "crew_size": "6",
        "power_level": 85.5,
        "oxygen_level": "92.3",
        "last_maintenance": "2026-06-26"
    }

    bad_data = {
        "station_id": "ISS002",
        "name": "Internation Space Station",
        "crew_size": 21,
        "power_level": 85.5,
        "oxygen_level": 41.3,
        "last_maintenance": "2026-06-26",
        "is_operational": False
    }

    print("\nSpace Station Data Validation")
    try:
        print("========================================")
        print("Valid station created:")
        valid_station = SpaceStation(**good_data)
        print_station(valid_station)

        print("========================================")
        print("Expected validation error:")
        invalid_station = SpaceStation(**bad_data)
        print_station(invalid_station)

    except ValidationError as ve:
        for dic_error in ve.errors():
            print(dic_error['msg'])
        print()


if __name__=="__main__":
    main()
