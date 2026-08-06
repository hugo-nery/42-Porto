from ex0 import CreatureFactory, AquaFactory, FlameFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import BattleStrategy, NormalStrategy, AggressiveStrategy, DefensiveStrategy


def battle(oponents_lst: list[(CreatureFactory, BattleStrategy)]):
	print("\n*** Tournament ***")
	print(f"{len(oponents_lst)} opponents involved")

	


if __name__ == "__main__":

	print("Tournament 0 (basic)")
	print(" [ (Flameling+Normal), (Healing+Defensive) ]")

	
	battle([(FlameFactory, NormalStrategy), (TransformCreatureFactory, AggressiveStrategy)])

