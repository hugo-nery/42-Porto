from .battle_strategy import BattleStrategy
from ex0 import Creature
from ex1.shiftling import Shiftling
from ex1.morphagon import Morphagon


class AggressiveStrategy(BattleStrategy):

	def act(self, creature: Creature):
		if (self.is_valid(creature)):
			return (f"{creature.transform()}\n"
		   			f"{creature.attack()}\n"
					f"{creature.revert()}\n")

	def is_valid(self, creature: Creature):
		return (isinstance(creature, (Shiftling, Morphagon)))
