# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_growth.py                                  :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/17 17:47:04 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 14:16:59 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name.capitalize()
        self._height = height
        self._age = age

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._age} days old")

    def age(self) -> None:
        self._age += 1

    def grow(self) -> None:
        self._height = self._height * 1.028


if __name__ == "__main__":
    rose = Plant("Rose", 25, 30)
    print("=== Garden Plant Growth ===")
    rose.show()
    start = rose._height
    for i in range(0, 7):
        print(f"=== Day {i+1} ===")
        rose.grow()
        rose.age()
        rose.show()

    print(f"Growth this week: {(rose._height - start):.2f}cm")
