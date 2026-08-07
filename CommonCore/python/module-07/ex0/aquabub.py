from .creature import Creature


class Aquabub(Creature):

    name = "Aquabub"
    creature_type = "Water"

    def attack(self) -> str:
        return ("Aquabub uses Water Gun!")
