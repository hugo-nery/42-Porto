# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_garden_security.py                               :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/19 10:54:12 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 14:22:45 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float = 0.0, age: int = 0) -> None:
        self.name = name.capitalize()
        self._height = 0.0
        self.set_height(height)
        self._age = 0
        self.set_age(age)
        print("Plant created:", end=" ")
        self.show()

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")

    def set_age(self, age: int) -> bool:
        if(age < 0):
            print(f"{self.name}: Error, age cannot be negative!")
            return False
        elif(age <= self._age):
            print(f"{self.name}: Error, age cannot be equal or smaller than current age!")
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


if __name__ == "__main__":
    print("=== Garden Security System ===")
    rose = Plant("Rose", 15, 10)

    while(not rose.set_height(float(input("\nUpdate height to: ")))):
        print("Height update rejected! Try again!\n")

    while(not rose.set_age(int(input("Update age to: ")))):
        print("Age update rejected! Try again!\n")

    print("\nCurrent state:", end=" ")
    rose.show()
