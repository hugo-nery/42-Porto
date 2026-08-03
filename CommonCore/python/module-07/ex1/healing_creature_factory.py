from ex0.creature import Creature
from ex0.creature_factory import CreatureFactory

from .sproutling import Sproutling
from .bloomelle import Bloomelle


class HealingCreatureFactory(CreatureFactory):

	def create_base(self) -> Creature:
		return (Sproutling())

	def create_evolved(self) -> Creature:
		return (Bloomelle())
