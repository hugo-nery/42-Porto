# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_finally_block.py                                 :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/25 15:24:29 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/25 16:29:02 by hde-albu          ###   ########.fr       #
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


def water_plant(plant_name: str) -> None:
    temp = plant_name
    if (temp.capitalize() != plant_name):
        raise PlantError(f"Invalid plant name to water: '{plant_name}'")
    else:
        print(f"Watering {plant_name}: [OK]")


if __name__ == "__main__":
    print("=== Garden Watering System ===\n")
    print("Testing valid plants...")
    try:
        print("Opening watering system")
        water_plant("Tomato")
        water_plant("Lettuce")
        water_plant("Carrots")
    except PlantError as pe:
        print("Caught PlantError:", pe)
    finally:
        print("Closing watering system\n")

    print("Testing invalid plants...")
    try:
        print("Opening watering system")
        water_plant("Tomato")
        water_plant("lettuce")
    except PlantError as pe:
        print("Caught PlantError:", pe)
        print(".. ending tests and returning to main")
    finally:
        print("Closing watering system")

    print("\nCleanup always happens, even with errors!")
