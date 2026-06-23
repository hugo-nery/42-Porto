# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_garden_analytics.py                              :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/23 14:26:08 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 19:06:00 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    
    class Statistics:
        def __init__(self):
            self._grow_calls = 0
            self._age_calls = 0
            self._show_calls = 0
        
        def increment_grow(self) -> None:
            self._grow_calls += 1

        def increment_age(self) -> None:
            self._age_calls += 1
        
        def increment_show(self) -> None:
            self._show_calls += 1
                
        def show_stats(self):
            print(f"Stats: {self._grow_calls} grow, {self._age_calls} age, "
                  f"{self._show_calls} show, ", end = "")

    def __init__(self, name: str, height: float = 0.0, age: int = 0) -> None:
        self.name = name.capitalize()
        self._height = 0.0
        self.set_height(height)
        self._age = 0
        self.set_age(age)
        self._stats = self.Statistics()

    @classmethod
    def create_anonymous(cls, height: float = 0.0, age: int = 0) -> "Plant":
        return (cls("Anonymous", height, age))

    @staticmethod
    def year_old(age: int) -> bool:
        return (age > 365)

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
        self._stats.increment_age()

    def grow(self) -> None:
        self._height = self._height * 1.028
        self._stats.increment_grow()

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")
        self._stats.increment_show()

class Flower(Plant):
    
    class FlowerStatistics(Plant.Statistics):
        def __init__(self):
            super().__init__()
            self._bloom_calls = 0
        
        def increment_bloom(self):
            self._bloom_calls += 1
        
        def show_stats(self):
            super().show_stats()
            print(f"{self._bloom_calls} bloom")

    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 color: str,
                 bloom: bool) -> None:
        super().__init__(name, height, age)
        self.color = color
        self._bloom = bloom
        self._stats = self.FlowerStatistics()

    def bloom(self, bloom: bool = False) -> None:
        if (bloom):
            print(f"\n[asking {self.name} to bloom]\n")
        self._bloom = bloom
        self._stats.increment_bloom()

    def show(self) -> None:
        super().show()
        print(f"- Color: {self.color}")
        if (self._bloom):
            print(f"- {self.name} is blooming beautifully!\n")
        else:
            print(f"- {self.name} has not bloomed yet.")

class Seeds(Flower):
    def __init__(self, name, height, age, color, bloom):
        super().__init__(name, height, age, color, bloom)
        self._seeds_number = 0

    def update_seeds(self) -> None:
        if (self._bloom):
            self._seeds_number = round(self._height * 2)
        else:
            print(f"Can'no't update seeds: {self.name} has not bloomed yet.")

    def show(self) -> None:
        super().show()
        print(f"Seeds: {self._seeds_number}")


class Tree(Plant):
    
    class TreeStatistics(Plant.Statistics):
        def __init__(self):
            super().__init__()
            self._produceSh_calls = 0
            
        def increment_produceSh(self) -> None:
            self._produceSh_calls += 1
        
        def show_stats(self):
            super().show_stats()
            print(f"{self._produceSh_calls} Pr. shade")

    def __init__(self,
                 name: str,
                 height: float,
                 age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self._stats = self.TreeStatistics()
        
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

def display_stats(plant):
    plant._stats.show_stats()

if __name__ == "__main__":

    print("=== Garden statistics ===")
    print("=== Check year-old")
    # days = int(input("How many days: "))
    # print(f"Is {days} days more than a year? -> {Plant.year_old(days)}")
    # days = int(input("How many days: "))
    # print(f"Is {days} days more than a year? -> {Plant.year_old(days)}")
    
    rose = Flower("Rose", 15, 10, "red", False)
    print("\n=== Flower")
    rose.show()
    display_stats(rose)
    rose.bloom(True)
    rose.show()
    display_stats(rose)

    sunflower = Seeds("sunflower", 80, 45, "yellow", False)
    sunflower.show()
    
    sunflower.grow()
    sunflower.age()
    sunflower.bloom()
    sunflower.show()
    
    display_stats(sunflower)
    
	#falta o seeds