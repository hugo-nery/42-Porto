from ex0.creature import Creature
from . import TransformCapability


class Morphagon(Creature, TransformCapability):

    def __init__(self) -> None:
        Creature.__init__(self, "Normal/Dragon")
        TransformCapability.__init__(self)

    def attack(self) -> str:
        if (self.transform_state):
            return ("Morphagon unleashes a devastating morph strike!")
        else:
            return ("Morphagon attacks normally.")

    def transform(self) -> str:
        TransformCapability.transform(self)
        return ("Morphagon morphs into a dragonic battle form!")

    def revert(self) -> str:
        TransformCapability.revert(self)
        return ("Morphagon stabilizes its form.")
