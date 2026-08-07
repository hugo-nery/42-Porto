from ex0.creature import Creature
from . import HealCapability


class Bloomelle(Creature, HealCapability):

    name = "Bloomelle"
    creature_type = "Grass/Fairy"

    def attack(self) -> str:
        return ("Bloomelle uses Petal Dance!")

    def heal(self) -> str:
        return ("Bloomelle heals itself and others for a large amount")
