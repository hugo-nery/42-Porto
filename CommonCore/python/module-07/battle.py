from ex0 import CreatureFactory
from ex0 import AquaFactory
from ex0 import FlameFactory


def check_factory_create(factory: CreatureFactory) -> bool:

    try:
        base_creature = factory.create_base()
        print(f"{base_creature.describe()}\n{base_creature.attack()}")

        evo_creature = factory.create_evolved()
        print(f"{evo_creature.describe()}\n{evo_creature.attack()}\n")

        return True
    except Exception:
        return False


def base_battle(factory_a: CreatureFactory,
                factory_b: CreatureFactory) -> None:

    try:
        print("--- Testing battle ---")
        creature_a = factory_a.create_base()
        creature_b = factory_b.create_base()

        print(f"{creature_a.describe()}\n\t\tvs.\n"
              f"{creature_b.describe()}\n\n!! FIGHT !!\n")
        print(f"{creature_a.attack()}\n{creature_b.attack()}")

    except Exception:
        print("Invalid factory!")


if __name__ == "__main__":

    print("--- Testing flame factory ---")
    flame_factory = FlameFactory()
    check_factory_create(flame_factory)

    print("--- Testing aqua factory ---")
    aqua_factory = AquaFactory()
    check_factory_create(aqua_factory)

    base_battle(flame_factory, aqua_factory)
