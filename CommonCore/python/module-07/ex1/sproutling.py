from ex0.creature import Creature
from . import HealCapability


class Sproutling(Creature, HealCapability):

	def __init__(self) -> None:
		Creature.__init__(self, "Grass")

	def attack(self) -> str:
		return ("Sproutling uses Vine Whip!")

	def heal(self) -> str:
		return ("Sproutling heals itself for a small amount")
