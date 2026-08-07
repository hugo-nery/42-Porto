from ex0 import Creature
from ex1 import HealCapability
from ex2 import BattleStrategy, BattleError


class DefensiveStrategy(BattleStrategy):

    name = "Defensive"

    def act(self, creature: Creature) -> None:
        if (isinstance(creature, HealCapability)):
            print(f"{creature.attack()}\n"
                  f"{creature.heal()}")
        else:
            raise BattleError(creature)

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, HealCapability))
