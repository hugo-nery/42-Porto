from ex0.creature import Creature
from . import TransformCapability


class Morphagon(Creature, TransformCapability):

    name = "Morphagon"
    creature_type = "Normal/Dragon"

    def attack(self) -> str:
        if (self.transform_state):
            return ("Morphagon unleashes a devastating morph strike!")
        else:
            return ("Morphagon attacks normally.")

    def transform(self) -> str:
        self.transform_state = True
        return ("Morphagon morphs into a dragonic battle form!")

    def revert(self) -> str:
        self.transform_state = False
        return ("Morphagon stabilizes its form.")
