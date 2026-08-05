from ex0 import CreatureFactory, AquaFactory, FlameFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import BattleStrategy, NormalStrategy, AggressiveStrategy, DefensiveStrategy


def battle(oponents_lst: list[(CreatureFactory, BattleStrategy)]):
	pass


if __name__ == "__main__":

	aqua_factory = AquaFactory()
	print(f"\n{aqua_factory.create_base().describe()}")

	flame_factory = FlameFactory()
	print(f"\n{flame_factory.create_base().describe()}")

	healing_factory = HealingCreatureFactory()
	print(f"\n{healing_factory.create_base().describe()}")

	transform_factory = TransformCreatureFactory()
	print(f"\n{transform_factory.create_base().describe()}")



