import alchemy.elements as a_e
import elements as e


def healing_potion() -> str:
    return (f"Healing potion brewed with {a_e.create_earth()} "
            f"and {a_e.create_air()}")


def strength_potion() -> str:
    return (f"Strength potion brewed with {e.create_fire()} "
            f"and {e.create_water()}")
