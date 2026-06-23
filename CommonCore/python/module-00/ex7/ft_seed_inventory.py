# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_seed_inventory.py                                :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/13 21:52:09 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/23 14:39:00 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    seed_type = f"{seed_type.capitalize()} seeds:"
    if (unit == "packets"):
        print(seed_type, quantity, unit, "available")
    elif (unit == "grams"):
        print(seed_type, quantity, unit, "total")
    elif (unit == "area"):
        print(seed_type, "covers", quantity, "square meters")
    else:
        print("Unknown unit type")
