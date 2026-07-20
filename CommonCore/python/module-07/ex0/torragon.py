from .creature import Creature


class Torragon(Creature):

    def __init__(self) -> None:
        super().__init__("Water")

    def attack(self) -> str:
        return ("Torragon uses Hydro Pump!")
