from ex0 import Creature
from ex2 import BattleStrategy
from ex2 import BattleError


class NormalStrategy(BattleStrategy):

    name = "Normal"

    def act(self, creature: Creature) -> None:
        if (not self.is_valid(creature)):
            raise BattleError(creature)

        print(creature.attack())

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, Creature))
