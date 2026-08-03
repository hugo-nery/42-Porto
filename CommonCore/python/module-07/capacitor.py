from ex1 import HealingCreatureFactory
from ex1 import TransformCreatureFactory


if __name__ == "__main__":

	healing_c_factory = HealingCreatureFactory()
	print("Testing Creature with healing capability")
	print("-Base:")
	heal_base_creature = healing_c_factory.create_base()
	print(f"{heal_base_creature.describe()}")
	print(f"{heal_base_creature.attack()}")
	print(f"{heal_base_creature.heal()}")

	print("\n-Evolved:")
	heal_evolved_creature = healing_c_factory.create_evolved()
	print(f"{heal_evolved_creature.describe()}")
	print(f"{heal_evolved_creature.attack()}")
	print(f"{heal_evolved_creature.heal()}")


	transform_c_factory = TransformCreatureFactory()
	print("\nTesting Creature with transform capability")
	print("-Base:")
	trans_base_creature = transform_c_factory.create_base()
	print(f"{trans_base_creature.describe()}")
	print(f"{trans_base_creature.attack()}")
	print(f"{trans_base_creature.transform()}")
	print(f"{trans_base_creature.attack()}")
	print(f"{trans_base_creature.revert()}")
	# print(f"{trans_base_creature.attack()}")

	print("\n-Evolved:")
	trans_evolved_creature = transform_c_factory.create_evolved()
	print(f"{trans_evolved_creature.describe()}")
	print(f"{trans_evolved_creature.attack()}")
	print(f"{trans_evolved_creature.transform()}")
	print(f"{trans_evolved_creature.attack()}")
	print(f"{trans_evolved_creature.revert()}")
	# print(f"{trans_evolved_creature.attack()}")



