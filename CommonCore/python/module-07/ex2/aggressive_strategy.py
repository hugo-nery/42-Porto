from .battle_strategy import BattleStrategy
from ex0 import Creature
from ex1.shiftling import Shiftling
from ex1.morphagon import Morphagon


class AggressiveStrategy(BattleStrategy):

	def act(self, creature: Creature) -> str:
		if (self.is_valid(creature)):
			return (f"{creature.transform()}\n"
		   			f"{creature.attack()}\n"
					f"{creature.revert()}\n")
		else:
			return ("Error")

	def is_valid(self, creature: Creature) -> bool:
		return (isinstance(creature, (Shiftling, Morphagon)))
