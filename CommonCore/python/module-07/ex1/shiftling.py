from ex0.creature import Creature
from . import TransformCapability


class Shiftling(Creature, TransformCapability):

    def __init__(self) -> None:
        Creature.__init__(self, "Normal")
        TransformCapability.__init__(self)

    def attack(self) -> str:
        if (self.transform_state):
            return ("Shiftling performs a boosted strike!")
        else:
            return ("Shiftling attacks normally.")

    def transform(self) -> str:
        TransformCapability.transform(self)
        return ("Shiftling shifts into a sharper form!")

    def revert(self) -> str:
        TransformCapability.revert(self)
        return ("Shiftling returns to normal.")
