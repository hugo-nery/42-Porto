from ex0 import Creature, CreatureFactory

from .shiftling import Shiftling
from .morphagon import Morphagon


class TransformCreatureFactory(CreatureFactory):

    def create_base(self) -> Creature:
        return (Shiftling())

    def create_evolved(self) -> Creature:
        return (Morphagon())
