from enum import Enum
from pydantic import BaseModel, Field, model_validator, ValidationError
from datetime import datetime


class ContactType(Enum):
    radio = 1
    visual = 2
    physical = 3
    telepathic = 4


class AlienContact(BaseModel):
    contact_id: str = Field(min_length=5, max_length=15)
    timestamp: datetime
    location: str = Field(min_length=3, max_length=100)
    contact_type: ContactType
    signal_strength: float = Field(ge=0.0, le=10.0)
    duration_minutes: int = Field(ge=1, le=1440)
    witness_count: int = Field(ge=1, le=100)
    message_received: str = Field(None, max_length=500)
    is_verified: bool = False

    @model_validator(mode='after')
    def validation_rules(self):
        errors_list: list[str] = []
        if self.contact_id[0:2] != "AC":
            errors_list.append("Contact ID must start with 'AC' (Alien Contact)")
        if self.contact_type == ContactType.physical and not self.is_verified:
            errors_list.append("Physical contact reports must be verified")
        if self.contact_type == ContactType.telepathic and self.witness_count < 3:
            errors_list.append("Telepathic contact requires at least 3 witnesses")
        if self.signal_strength > 7 and (self.message_received is None or self.message_received == ""):
            errors_list.append("Strong signals (> 7.0) should include received messages")
        if len(errors_list) > 0:
            raise ValueError("\n".join(errors_list))
        return self


def print_contact(ac: AlienContact) -> None:
    print(f"ID: {ac.contact_id}\n"
          f"Type: {ac.contact_type.name}\n"
          f"Location: {ac.location}\n"
          f"Signal: {ac.signal_strength}/10\n"
          f"Duration: {ac.duration_minutes} minutes\n"
          f"Witnesses: {ac.witness_count}\n"
          f"Message: '{ac.message_received}'\n")


def main() -> None:

    good_data = {
        "contact_id": "AC_2024_001",
        "timestamp": "1990-03-15",
        "location": "Area 51, Nevada",
        "contact_type": 1,
        "signal_strength": 8.5,
        "duration_minutes": 45,
        "witness_count": 1,
        "message_received": "Greetings from Zeta Reticuli",
        "is_verified": True
    }

    bad_data = {
        "contact_id": "AT_2024_001",
        "timestamp": "1990-03-15",
        "location": "Area 51, Nevada",
        "contact_type": 4,
        "signal_strength": 8.5,
        "duration_minutes": 500,
        "witness_count": 2,
        "message_received": "",
        "is_verified": False
    }

    print("\nAlien Contact Log Validation")
    try:
        print("======================================")
        print("Valid contact report:")
        et = AlienContact(**good_data)
        print_contact(et)

        print("======================================")
        print("Expected validation error:")
        dolly = AlienContact(**bad_data)
        print_contact(dolly)

    except ValidationError as ve:
        for dic_error in ve.errors():
            print(dic_error['msg'].removeprefix('Value error, '))


if __name__=="__main__":
    main()
