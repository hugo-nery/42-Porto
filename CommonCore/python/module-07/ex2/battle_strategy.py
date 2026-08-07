import abc
from ex0 import Creature


class BattleStrategy(abc.ABC):

    name: str

    @abc.abstractmethod
    def act(self, creature: Creature) -> None:
        pass

    @abc.abstractmethod
    def is_valid(self, creature: Creature) -> bool:
        pass


class BattleError(Exception):

    def __init__(self, creature: Creature) -> None:
        message = (f"Invalid Creature '{creature.name}' "
                   "for this aggressive strategy")
        super().__init__(message)
