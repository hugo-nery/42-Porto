# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_factory.py                                 :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 14:01:59 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 14:22:54 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name.capitalize()
        self._height = height
        self._age = age
        print("Created:", end=" ")
        self.show()

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")

    def age(self) -> None:
        self._age += 1

    def grow(self) -> None:
        self._height = self._height * 1.028


if __name__ == "__main__":
    print("=== Plant Factory Output ===")
    rose = Plant("Rose", 25, 30)
    oak = Plant("Oak", 200, 365)
    cactus = Plant("Cactus", 5, 90)
    sunflower = Plant("Sunflower", 80, 45)
    fern = Plant("Fern", 15, 120)
