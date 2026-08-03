from ex0.creature import Creature
from . import HealCapability


class Bloomelle(Creature, HealCapability):

    def __init__(self) -> None:
        Creature.__init__(self, "Grass/Fairy")

    def attack(self) -> str:
        return ("Bloomelle uses Petal Dance!")

    def heal(self) -> str:
        return ("Bloomelle heals itself and others for a large amount")
