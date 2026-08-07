import abc
from ex0 import Creature


class BattleStrategy(abc.ABC):

    @abc.abstractmethod
    def act(self, creature: Creature) -> str:
        pass

    @abc.abstractmethod
    def is_valid(self, creature: Creature) -> bool:
        pass
