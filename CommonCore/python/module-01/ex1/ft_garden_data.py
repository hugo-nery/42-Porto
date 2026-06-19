# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_garden_data.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/17 16:46:38 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/18 18:36:46 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class Plant:
    def __init__(self, name: str, height: int, age: int):
        self.name = name.capitalize()
        self.height = height
        self.age = age

    def show(self):
        print(f"{self.name}: {self.height:.1f}cm, {self.age} days old")


if __name__ == "__main__":
    plants = [Plant("Rose", 25, 30), Plant("Sunflower", 80, 45),
           Plant("Cactus", 15, 120)]
    print("=== Garden Plant Registry ===")
    for p in plants:
        p.show()
