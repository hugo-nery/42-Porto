from .creature import Creature


class Pyrodon(Creature):

    name = "Pyrodon"
    creature_type = "Fire/Flying"

    def attack(self) -> str:
        return ("Pyrodon uses Flamethrower!")
