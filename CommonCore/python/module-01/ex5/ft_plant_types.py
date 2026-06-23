# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_types.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/19 12:02:23 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 16:23:38 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float = 0.0, age: int = 0) -> None:
        self.name = name.capitalize()
        self._height = 0.0
        self.set_height(height)
        self._age = 0
        self.set_age(age)
        # print("Plant created:", end=" ")
        # self.show()

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")

    def set_age(self, age: int) -> bool:
        if(age < 0):
            print(f"{self.name}: Error, age cannot be negative!")
            return False
        elif(age <= self._age):
            print(f"{self.name}: Error, age cannot be equal or smaller "
                  "than current age!")
            return False
        else:
            self._age = age
            return True

    def set_height(self, height: float) -> bool:
        if(height < 0):
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

    def grow(self) -> None:
        self._height = self._height * 1.028


class Flower(Plant):
    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 color: str,
                 bloom: bool) -> None:
        super().__init__(name, height, age)
        self.color = color
        self._bloom = bloom

    def bloom(self, bloom: bool = False) -> None:
        if (bloom):
            print(f"\n[asking {self.name} to bloom]\n")
        self._bloom = bloom

    def show(self) -> None:
        super().show()
        print(f"- Color: {self.color}")
        if (self._bloom):
            print(f"- {self.name} is blooming beautifully!\n")
        else:
            print(f"- {self.name} has not bloomed yet.")


class Tree(Plant):
    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter

    def produce_shade(self) -> None:
        print("\n[asking the tree to produce shade]\n")
        print(f"Tree {self.name} now produces a shade of {self._height:.1f}cm"
              f" long and {self.trunk_diameter:.1f}cm wide.\n")
        # crown_radius = self.trunk_diameter * 0.15
        # shade_area = 3.14 * pow(crown_radius, 2)
        # print(f"Tree {self.name} now produces a shade area"
        #       f" of {shade_area:.2f}m2.")

    def show(self) -> None:
        super().show()
        print(f"- Trunk diameter: {self.trunk_diameter:.1f}cm")


class Vegetable(Plant):
    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 harvest_season: str,
                 nutritional_value: int) -> None:
        super().__init__(name, height, age)
        self.harvest_season = harvest_season.capitalize()
        self.nutritional_value = nutritional_value

    def show(self) -> None:
        super().show()
        print(f"- Harvest Season: {self.harvest_season}")
        print(f"- Nutritional Value: {self.nutritional_value}")

    def ft_grow_veggie(self, days: int) -> None:
        print(f"\n[growing tomato for {days} days]\n")
        for d in range(0, days):
            tomato.age()
            tomato.grow()
            tomato.nutritional_value += 1


if __name__ == "__main__":
    print("=== Garden Plant Types ===\n")
    
    rose = Flower("Rose", 15, 10, "red", False)
    print("=== Flower")
    rose.show()
    rose.bloom(True)
    rose.show()

    oak = Tree("oak", 200, 365, 5)
    print("=== Tree")
    oak.show()
    oak.produce_shade()

    print("=== Vegetable")
    tomato = Vegetable("tomato", 5, 10, "April", 0)
    tomato.show()
    tomato.ft_grow_veggie(20)
    tomato.show()
