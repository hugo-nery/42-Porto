from ex0 import CreatureFactory
from ex0 import AquaFactory
from ex0 import FlameFactory


def check_factory_create(factory: CreatureFactory) -> bool:
	
	try:
		print("--- Testing factory ---")
		new_creature = factory.create_base()
		print(f"{new_creature.describe()}\n{new_creature.attack()}")
		
		evo_creature = factory.create_evolved()
		print(f"{evo_creature.describe()}\n{evo_creature.attack()}\n")

		return True
	except:
		return False


def base_battle(factory_a: CreatureFactory, factory_b: CreatureFactory) -> None:

	try:
		print("--- Testing battle ---")
		flame_base = factory_a.create_base()
		aqua_base = factory_b.create_base()

		print(f"{flame_base.describe()}\n\tvs.\n{aqua_base.describe()}\n\t__ FIGHT __")
		print(f"{flame_base.attack()}\n{aqua_base.attack()}")

	except:
		print("Invalid factory!")

if __name__ == "__main__":

	flame_factory = FlameFactory()
	aqua_factory = AquaFactory()

	check_factory_create(flame_factory)
	check_factory_create(aqua_factory)

	base_battle(flame_factory, aqua_factory)
