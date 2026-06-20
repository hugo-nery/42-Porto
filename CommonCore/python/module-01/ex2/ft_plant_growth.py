# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_growth.py                                  :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/17 17:47:04 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/20 15:56:58 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name.capitalize()
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self.age} days old")

    def ft_age(self) -> None:
        self.age += 1

    def ft_grow(self) -> None:
        self.height = self.height * 1.028


if __name__ == "__main__":
    rose = Plant("Rose", 25, 30)
    print("=== Garden Plant Growth ===")
    rose.show()
    start = rose.height
    for i in range(1, 8):
        print(f"=== Day {i} ===")
        rose.ft_grow()
        rose.ft_age()
        rose.show()

    print(f"Growth this week: {(rose.height - start):.2f}cm")
