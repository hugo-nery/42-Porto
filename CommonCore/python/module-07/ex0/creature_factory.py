import abc
from .creature import Creature


class CreatureFactory (abc.ABC):

    name: str

    @abc.abstractmethod
    def create_base(self) -> Creature:
        pass

    @abc.abstractmethod
    def create_evolved(self) -> Creature:
        pass
