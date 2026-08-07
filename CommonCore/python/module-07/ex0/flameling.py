from .creature import Creature


class Flameling(Creature):

    name = "Flameling"
    creature_type = "Fire"

    def attack(self) -> str:
        return ("Flameling uses Ember!")
