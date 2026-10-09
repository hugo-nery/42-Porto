from pydantic import BaseModel, ValidationError
from datetime import date


class SpaceStation (BaseModel):
    station_id: str
    name: str
    crew_size: int
    power_level: float
    oxygen_level: float
    last_maintenance: date
    is_operational: bool = True
    notes: str = None


def main():
    print("Space Station Data Validation\n"
          "========================================")

    bad_data = {
        "station_id": "ISS-01",
        # Notice 'name' is missing entirely!
        "crew_size": "six", # This string cannot be converted to an int!
        "power_level": 98.5,
        "oxygen_level": 100.0,
        "last_maintenance": "2026-10-06"
    }

if __name__=="__main__":
    pass