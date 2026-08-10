# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_seed_inventory.py                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 21:52:09 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/14 22:09:09 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
	print(seed_type.capitalize(), "seeds: ", end = " ")
	if (unit == "packets"):
		print(quantity, unit, "available")
	elif (unit == "grams"):
		print(quantity, unit, "total")
	elif (unit == "area"):
		print("covers", quantity, "square meters")
	else:
		print("Unknown unit type")

# ft_seed_inventory("tomato", 15, "packets")
# ft_seed_inventory("carrot", 8, "grams")
# ft_seed_inventory("tomato", 12, "area")
