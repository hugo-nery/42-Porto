from ex0.creature import Creature
from . import HealCapability


class Sproutling(Creature, HealCapability):

    name = "Sproutling"
    creature_type = "Grass"

    def attack(self) -> str:
        return ("Sproutling uses Vine Whip!")

    def heal(self) -> str:
        return ("Sproutling heals itself for a small amount.")
