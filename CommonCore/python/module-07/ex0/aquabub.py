from .creature import Creature


class Aquabub(Creature):

    def __init__(self) -> None:
        super().__init__("Water")

    def attack(self) -> str:
        return ("Aquabub uses Water Gun!")
