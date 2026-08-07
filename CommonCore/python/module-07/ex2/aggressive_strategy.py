from ex0 import Creature
from ex1 import TransformCapability
from ex2 import BattleStrategy, BattleError
from typing import cast


class AggressiveStrategy(BattleStrategy):

    name = "Aggressive"

    def act(self, creature: Creature) -> None:
        if (not self.is_valid(creature)):
            raise BattleError(creature)

        print(f"{cast(TransformCapability, creature).transform()}\n"
              f"{creature.attack()}\n"
              f"{cast(TransformCapability, creature).revert()}\n")

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, Creature)
                and isinstance(creature, TransformCapability))
