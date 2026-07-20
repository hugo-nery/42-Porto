from .creature import Creature


class Pyrodon(Creature):

    def __init__(self) -> None:
        super().__init__("Fire/Flying")

    def attack(self) -> str:
        return ("Pyrodon uses Flamethrower!")
