from .creature import Creature


class Torragon(Creature):

    name = "Torragon"
    creature_type = "Water"

    def attack(self) -> str:
        return ("Torragon uses Hydro Pump!")
