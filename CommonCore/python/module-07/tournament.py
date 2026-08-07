from ex0 import CreatureFactory, AquaFactory, FlameFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import BattleStrategy, NormalStrategy
from ex2 import AggressiveStrategy, DefensiveStrategy


def battle(oponents_lst: list[tuple[CreatureFactory, BattleStrategy]]):

    print("\n*** Tournament ***")
    print(f"{len(oponents_lst)} opponents involved")

    for i in range(len(oponents_lst)):
        factory, strategy = oponents_lst[i]

        for fac, stra in oponents_lst[i + 1:]:

            print("\n* Battle *")

            creature_a = factory.create_base()
            creature_b = fac.create_base()
            print(f"{creature_a.describe()}\n vs\n{creature_b.describe()}")

            print("\n now fight!\n")
            if ("Error" in strategy.act(creature_a)):
                print(f"Battle error, aborting tournament: "
                      f"Invalid Creature '{creature_a.__class__.__name__}' "
                      "for this aggressive strategy")
                break

            if ("Error" in stra.act(creature_b)):
                print(f"Battle error, aborting tournament: "
                      f"Invalid Creature '{creature_b.__class__.__name__}' "
                      "for this aggressive strategy")
                break

            print(strategy.act(creature_a))
            print(stra.act(creature_b))


if __name__ == "__main__":

    print("Tournament 0 (basic)")
    print(" [ (Flameling+Normal), (Healing+Defensive) ]")
    battle([(FlameFactory(), NormalStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy())])

    print("\n\nTournament 1 (error)")
    print(" [ (Flameling+Aggressive), (Healing+Defensive) ]")
    battle([(FlameFactory(), AggressiveStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy())])

    print("\nTournament 2 (multiple)")
    print(" [ (Aquabub+Normal), (Healing+Defensive), (Transform+Aggressive) ]")
    battle([(AquaFactory(), NormalStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy()),
            (TransformCreatureFactory(), AggressiveStrategy())])
