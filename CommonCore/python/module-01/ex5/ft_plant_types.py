# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_types.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/19 12:02:23 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/20 15:48:25 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float = 0.0, age: int = 0) -> None:
        self.name = name.capitalize()
        self.height = 0.0
        self.set_height(height)
        self.age = 0
        self.set_age(age)
        # print("Created:", end=" ")
        # self.show()

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self.age} days old")

    def set_age(self, age: int) -> bool:
        if(age < 0):
            if (self.age == 0):
                print(f"Error: Plant age cannot be negative! Defaulting to 0.")
            else:
                print(f"Error: Plant age cannot be negative!")
            return False
        elif(age <= self.age):
            print(f"Error: Plant age cannot be equal or smaller than the current age!")
            return False
        else:
            self.age = age
            return True

    def set_height(self, height: float) -> bool:
        if(height < 0):
            if (self.height == 0):
                print(f"Error: Plant height cannot be negative! Defaulting to 0.")
            else:
                print(f"Error: Plant height cannot be negative!")
            return False
        elif (height <= self.height):
            print(f"Error: Plant height cannot be equal or smaller than the current!")
            return False
        else:
            self.height = height
            return True
        
    def ft_age(self) -> None:
        self.age += 1

    def ft_grow(self) -> None:
        self.height = self.height * 1.028


class Flower(Plant):
    def __init__(self,
                 name: str,
                 height: int,
                 age: int,
                 color: str,
                 bloom: bool) -> None:
        super().__init__(name, height, age)
        self.color = color
        self.bloom = bloom

    def ft_bloom(self, bloom: bool = False) -> None:
        if (bloom):
            print(f"\n[asking {self.name} to bloom]\n")
        self.bloom = bloom

    def show(self) -> None:
        Plant.show(self)
        print(f"- Color: {self.color}")
        if (self.bloom):
            print(f"- {self.name} is blooming beautifully!\n")
        else:
            print(f"- {self.name} has not bloomed yet.")


class Tree(Plant):
    def __init__(self,
                 name: str,
                 height: int,
                 age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
    
    def produce_shade(self) -> None:
        print("\n[asking the tree to produce shade]\n")
        print(f"Tree {self.name} now produces a shade of {self.height:.1f}cm long and {self.trunk_diameter:.1f}cm wide.\n")
        # crown_radius = self.trunk_diameter * 0.15
        # shade_area = 3.14 * pow(crown_radius, 2)
        # print(f"Tree {self.name} now produces a shade area of {shade_area:.2f}m2.")

    def show(self) -> None:
        Plant.show(self)
        print(f"- Trunk diameter: {self.trunk_diameter:.1f}cm")


class Vegetable(Plant):
    def __init__(self,
                 name: str,
                 height: int,
                 age: int,
                 harvest_season: str,
                 nutritional_value: int) -> None:
        super().__init__(name, height, age)
        self.harvest_season = harvest_season.capitalize()
        self.nutritional_value = nutritional_value

    def show(self) -> None:
        Plant.show(self)
        print(f"- Harvest Season: {self.harvest_season}")
        print(f"- Nutritional Value: {self.nutritional_value}")

    def ft_grow_veggie(self, days: int) -> None:
        print("\n[growing tomato for 20 days]\n")
        for d in range(0, days):
            tomato.nutritional_value += 1
            tomato.ft_age()
            tomato.ft_grow()


if __name__ == "__main__":
    print("=== Garden Plant Types ===\n")
    
    rose = Flower("Rose", 15, 10, "red", False)
    print("=== Flower")
    rose.show()
    rose.ft_bloom(True)
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
    print()

