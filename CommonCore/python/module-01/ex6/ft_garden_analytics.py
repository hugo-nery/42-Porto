# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_garden_analytics.py                              :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/19 15:51:11 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/19 18:03:54 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:

    class Statistics:
        def __init__(self):
            self.__grow_calls = 0
            self.__age_calls = 0
            self.__show_calls = 0

        def increment_grow(self):
            self.__grow_calls += 1

        def increment_age(self):
            self.__age_calls += 1

        def increment_show(self):
            self.__show_calls += 1

        def show(self):
            print(f"Grow was called {self.__grow_calls} time(s).")
            print(f"Age was called {self.__age_calls} time(s).")
            print(f"Show was called {self.__show_calls} time(s).")

    def __init__(self, name: str, height: int = 0, age: int = 0) -> None:
        self.name = name.capitalize()
        self.height = 0
        self.set_height(height)
        self.age = 0
        self.set_age(age)
        # print("Created:", end=" ")
        # self.show()
        self.__stats = self.Statistics()

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self.age} days old")
        self.__stats.increment_show()

    def show_stats(self):
        self.__stats.show()

    def set_age(self, age) -> bool:
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

    def set_height(self, height) -> bool:
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
        self.__stats.increment_age()

    def ft_grow(self) -> None:
        self.height = self.height * 1.028
        self.__stats.increment_grow()

    @staticmethod
    def over_year(age_in_days: int) -> bool:
        return (age_in_days > 365)

    @classmethod
    def create_anonymous(cls, height=0, age=0) -> "Plant":
        return (cls("Anonymous", height, age))


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
        super().show()
        print(f"- Color: {self.color}")
        if (self.bloom):
            print(f"- {self.name} is blooming beautifully!\n")
        else:
            print(f"- {self.name} has not bloomed yet.")


class Seed(Flower):
    def __init__(self, name, height, age, color, bloom):
        super().__init__(name, height, age, color, bloom)
        self.seeds_count = 0

    def update_seed(self, seeds:int):
        self.seeds_count = seeds
    
    def show(self):
        super().show()
        print(f"- Seed Amount: {self.seeds_count}")


class Tree(Plant):

    class TreeStatistics(Plant.Statistics):
        def __init__(self):
            super().__init__()
            self.__p_shade_calls = 0

        def increment_p_shade(self):
            self.__p_shade_calls += 1

        def show_statiscs(self):
            super().show_statistics()
            print(f"Produce shade was called {self.__p_shade_calls} time(s).")

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

    def show(self):
        super().show(self)
        print(f"- Trunk diameter: {self.trunk_diameter:.1f}cm")


def display_stats(plant):
    plant.show_stats()

if __name__ == "__main__":
    print("=== Garden ===")
    rose = Flower("rose", 15, 30, "red", False)
    
    #falta testar tudo

    rose.show()
    rose.ft_grow()
    rose.show()

    display_stats(rose)