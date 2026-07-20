from .creature import Creature


class Flameling(Creature):

    def __init__(self) -> None:
        super().__init__("Fire")

    def attack(self) -> str:
        return ("Flameling uses Ember!")
