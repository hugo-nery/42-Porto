# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_types.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/19 12:02:23 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/19 13:14:20 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: int = 0, age: int = 0) -> None:
        self.name = name.capitalize()
        self.height = 0
        self.set_height(height)
        self.age = 0
        self.set_age(age)
        print("Created:", end=" ")
        self.show()

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self.age} days old")

    def get_age(self) -> int:
        return self.age

    def get_height(self) -> int:
        return self.height

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

    def ft_grow(self) -> None:
        self.height = self.height * 1.028


class Flower(Plant):
    def __init__(self, color: str) -> None:
        self.color = color
        self.bloom = False

    def ft_bloom(self, bloom: bool) -> None:
        self.bloom = bloom
        if (self.bloom):
            print("- Rose is blooming beautifully!")
        else:
            print("- Rose has not bloomed yet.")
    
    def show(self) -> None:
        print("=== Flower")
        self.show()
        print(f"- Color: {self.color}")
        self.ft_bloom(False)
        self.ft_bloom(True)


class Tree(Plant):
    def __init__(self,  trunk_diameter: float) -> None:
        self.trunk_diameter =  trunk_diameter
    
    def produce_shade(self) -> float:
        return self.height / self.trunk_diameter

class Vegetable(Plant):
    def __init__(self,  harvest_season: str, nutritional_value: str) -> None:
        self.harvest_season = harvest_season
        self.nutritional_value = nutritional_value

if __name__ == "__main__":
    rose = Flower()