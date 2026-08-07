from .battle_strategy import BattleStrategy
from ex0 import Creature
from ex1.sproutling import Sproutling
from ex1.bloomelle import Bloomelle


class DefensiveStrategy(BattleStrategy):

    def act(self, creature: Creature) -> str:
        if (self.is_valid(creature)):
            return (f"{creature.attack()}\n"
                    f"{creature.heal()}")
        else:
            return ("Error")

    def is_valid(self, creature: Creature) -> bool:
        return (isinstance(creature, (Sproutling, Bloomelle)))
