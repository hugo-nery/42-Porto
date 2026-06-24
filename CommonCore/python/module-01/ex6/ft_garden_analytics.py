# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_garden_analytics.py                              :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/23 14:26:08 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/24 14:11:21 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:

    class Statistics:
        def __init__(self) -> None:
            self._grow_calls = 0
            self._age_calls = 0
            self._show_calls = 0

        def increment_grow(self) -> None:
            self._grow_calls += 1

        def increment_age(self) -> None:
            self._age_calls += 1

        def increment_show(self) -> None:
            self._show_calls += 1

        def show_stats(self) -> None:
            print(f"Stats: {self._grow_calls} grow, {self._age_calls} age, "
                  f"{self._show_calls} show", end="")

    def __init__(self, name: str, height: float = 0.0, age: int = 0) -> None:
        self.name = name.capitalize()
        self._height = 0.0
        self.set_height(height)
        self._age = 0
        self.set_age(age)
        self._stats = self.Statistics()

    @classmethod
    def create_anonymous(cls, height: float = 0.0, age: int = 0) -> "Plant":
        return (cls("Unknown plant", height, age))

    @staticmethod
    def year_old(age: int) -> bool:
        return (age > 365)

    def set_age(self, age: int) -> bool:
        if (age < 0):
            print(f"{self.name}: Error, age cannot be negative!")
            return False
        elif (age < self._age):
            print(f"{self.name}: Error, age cannot be smaller "
                  "than current age!")
            return False
        else:
            self._age = age
            return True

    def set_height(self, height: float) -> bool:
        if (height < 0):
            print(f"{self.name}: Error, height can't be negative!")
            return False
        else:
            self._height = height
            return True

    def get_age(self) -> int:
        return self._age

    def get_height(self) -> float:
        return self._height

    def age(self) -> None:
        self._age += 1
        self._stats.increment_age()

    def grow(self) -> None:
        self._height = self._height * 1.028
        self._stats.increment_grow()

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")
        self._stats.increment_show()


class Flower(Plant):
    class FlowerStatistics(Plant.Statistics):
        def __init__(self) -> None:
            super().__init__()
            self._bloom_calls = 0

        def increment_bloom(self) -> None:
            self._bloom_calls += 1

        def show_stats(self) -> None:
            super().show_stats()
            print(f", {self._bloom_calls} bloom")

    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 color: str,
                 bloom: bool) -> None:
        super().__init__(name, height, age)
        self.color = color
        self._bloom = bloom
        self._stats: Flower.FlowerStatistics = self.FlowerStatistics()

    def bloom(self, bloom: bool = False) -> None:
        if (bloom):
            print(f"[asking {self.name} to grow and bloom]\n")
        self._bloom = bloom
        self._stats.increment_bloom()

    def show(self) -> None:
        super().show()
        print(f"- Color: {self.color}")
        if (self._bloom):
            print(f"- {self.name} is blooming beautifully!")
        else:
            print(f"- {self.name} has not bloomed yet.")


class Seeds(Flower):
    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 color: str,
                 bloom: bool) -> None:
        super().__init__(name, height, age, color, bloom)
        self._seeds_number = 0

    def bloom(self, bloom: bool = False) -> None:
        super().bloom(bloom)
        if (self._bloom):
            self._seeds_number = round(self._height * 0.7)

    def show(self) -> None:
        super().show()
        print(f"- Seeds: {self._seeds_number}")


class Tree(Plant):
    class TreeStatistics(Plant.Statistics):
        def __init__(self) -> None:
            super().__init__()
            self._produceSh_calls = 0

        def increment_produceSh(self) -> None:
            self._produceSh_calls += 1

        def show_stats(self) -> None:
            super().show_stats()
            print(f", {self._produceSh_calls} shade")

    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self._stats: Tree.TreeStatistics = self.TreeStatistics()

    def produce_shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(f"Tree {self.name} now produces a shade of {self._height:.1f}cm"
              f" long and {self.trunk_diameter:.1f}cm wide.")
        self._stats.increment_produceSh()

    def show(self) -> None:
        super().show()
        print(f"- Trunk diameter: {self.trunk_diameter:.1f}cm")


def display_stats(plant: Plant) -> None:
    print(f"[statistics for {plant.name}]")
    plant._stats.show_stats()


if __name__ == "__main__":
    print("\033c")
    print("=== Garden statistics ===")
    print("=== Check year-old")
    days = int(input("How many days: "))
    print(f"Is {days} days more than a year? -> {Plant.year_old(days)}")
    days = int(input("How many days: "))
    print(f"Is {days} days more than a year? -> {Plant.year_old(days)}")

    print("\n=== Flower")
    rose = Flower("Rose", 15, 10, "red", False)
    rose.show()
    display_stats(rose)
    rose.grow()
    rose.bloom(True)
    rose.show()
    display_stats(rose)

    print("\n=== Tree")
    oak = Tree("oak", 200, 365, 5)
    oak.show()
    display_stats(oak)
    oak.produce_shade()
    display_stats(oak)

    print("\n=== Seed")
    sunflower = Seeds("sunflower", 80, 45, "yellow", False)
    sunflower.show()
    sunflower.grow()
    sunflower.age()
    sunflower.bloom(True)
    sunflower.show()
    display_stats(sunflower)

    print("\n=== Anonymous")
    anonymous = Plant.create_anonymous()
    anonymous.show()
    display_stats(anonymous)
    print()
