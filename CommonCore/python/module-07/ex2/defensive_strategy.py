from ex0 import Creature
from ex1 import HealCapability
from ex2 import BattleStrategy, BattleError
from typing import cast


class DefensiveStrategy(BattleStrategy):

    name = "Defensive"

    def act(self, creature: Creature) -> None:
        if (not self.is_valid(creature)):
            raise BattleError(creature)

        print(f"{creature.attack()}\n"
              f"{cast(HealCapability, creature).heal()}")

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, Creature)
                and isinstance(creature, HealCapability))
