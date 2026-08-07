from ex0.creature import Creature
from . import TransformCapability


class Shiftling(Creature, TransformCapability):

    name = "Shiftling"
    creature_type = "Normal"

    def attack(self) -> str:
        if (self.transform_state):
            return ("Shiftling performs a boosted strike!")
        else:
            return ("Shiftling attacks normally.")

    def transform(self) -> str:
        self.transform_state = True
        return ("Shiftling shifts into a sharper form!")

    def revert(self) -> str:
        self.transform_state = False
        return ("Shiftling returns to normal.")
