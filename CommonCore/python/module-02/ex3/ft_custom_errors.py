# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_custom_errors.py                                 :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/25 12:52:18 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/25 16:29:04 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

class GardenError(Exception):
    def __init__(self, message: str) -> None:
        self.message = message
        super().__init__(self.message)


class PlantError(GardenError):
    def __init__(self, message: str = "") -> None:
        if (not message):
            message = "Unknown plant error"
        super().__init__(message)


class WaterError(GardenError):
    def __init__(self, message: str = "") -> None:
        if (not message):
            message = "Unknown water error"
        super().__init__(message)


def needs_harvesting(days: int) -> None:
    if (days > 30):
        raise PlantError("The tomato plant is wilting!")


def needs_water(liters: float) -> None:
    if (liters < 5):
        raise WaterError("Not enough water in the tank!")


if __name__ == "__main__":
    print("\033c")
    print("=== Custom Garden Errors Demo ===")
    print("Testing PlantError...")
    try:
        needs_harvesting(35)
    except PlantError as pe:
        print("Caught PlantError:", pe)

    print("\nTesting WaterError...")
    try:
        needs_water(2)
    except WaterError as we:
        print("Caught WaterError:", we)

    print("\nTesting catching all garden errors...")
    try:
        needs_harvesting(35)
    except GardenError as ge:
        print("Caught GardenError:", ge)

    try:
        needs_water(2)
    except GardenError as ge:
        print("Caught GardenError:", ge)

    print("\nAll custom error types work correctly!")
