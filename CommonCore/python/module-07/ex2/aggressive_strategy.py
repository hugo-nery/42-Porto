from ex0 import Creature
from ex1 import TransformCapability
from ex2 import BattleStrategy, BattleError


class AggressiveStrategy(BattleStrategy):

    name = "Aggressive"

    def act(self, creature: Creature) -> None:
        if (isinstance(creature, TransformCapability)):
            print(f"{creature.transform()}\n"
                  f"{creature.attack()}\n"
                  f"{creature.revert()}\n")
        else:
            raise BattleError(creature)

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, TransformCapability))
