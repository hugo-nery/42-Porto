from ex0 import Creature
from ex2 import BattleStrategy


class NormalStrategy(BattleStrategy):

    name = "Normal"

    def act(self, creature: Creature) -> None:
        print(creature.attack())

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, Creature))
