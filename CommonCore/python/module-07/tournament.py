from ex0 import CreatureFactory, AquaFactory, FlameFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import BattleError, BattleStrategy, NormalStrategy
from ex2 import AggressiveStrategy, DefensiveStrategy


def battle(oponents_lst: list[tuple[CreatureFactory, BattleStrategy]]) -> None:

    if (not isinstance(oponents_lst, list)):
        print("\nBattle error: Expected list of 'tuple(CreatureFactory, "
              "BattleStrategy)'")
        return

    for tp in oponents_lst:
        if (
            not isinstance(tp, tuple)
            or len(tp) != 2
            or not isinstance(tp[0], CreatureFactory)
            or not isinstance(tp[1], BattleStrategy)
           ):
            print("\nBattle error: Expected list of 'tuple(CreatureFactory, "
                  "BattleStrategy)'")
            return

    my_lst = ", ".join(
        [f"({f.name} + {s.name})" for f, s in oponents_lst])
    print(f"[ {my_lst} ]")

    print("\n*** Tournament ***")
    print(f"{len(oponents_lst)} opponents involved")

    for i in range(len(oponents_lst) - 1):
        f_a, s_a = oponents_lst[i]

        for f_b, s_b in oponents_lst[i + 1:]:
            print("\n* Battle *")
            creature_a = f_a.create_base()
            creature_b = f_b.create_base()
            print(f"{creature_a.describe()}\n vs\n{creature_b.describe()}")

            try:
                print("\n !! FIGHT !!\n")
                s_a.act(creature_a)
                s_b.act(creature_b)

            except BattleError as be:
                print(f"Battle error, aborting tournament: {be}")
                break


if __name__ == "__main__":

    print("\nTournament 0 (basic)")
    battle([(FlameFactory(), NormalStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy())])

    print("-------------------------\n\nTournament 1 (error)")
    battle([(FlameFactory(), AggressiveStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy())])

    print("-------------------------\n\nTournament 2 (multiple)")
    battle([(AquaFactory(), NormalStrategy()),
            (HealingCreatureFactory(), DefensiveStrategy()),
            (TransformCreatureFactory(), AggressiveStrategy())])
