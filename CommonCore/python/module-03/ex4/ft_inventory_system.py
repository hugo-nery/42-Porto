# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_inventory_system.py                              :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/29 14:22:21 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/29 16:31:26 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import sys

# sys.argv, len(), print(), sum(), list(), round(),
# dict.keys(), dict.values(), dict.update()

# <item_name>:<quantity>
def clean_kv(args: list):
	temp_dict = {}
	for i in range(1, len(args)):
		try:
			key, val = args[i].split(":")
			val = int(val)
			if (key in temp_dict.keys()):
				print(f"Redundant item '{key}' - discarding")
			else:
				temp_dict[key] = val
		except Exception as e:
			if ("unpack" in str(e)):
				print(f"Error - invalid parameter '{args[i]}'")
			else:
				print(f"Quantity error for '{key}': invalid literal for int() with base 10: '{val}'")
	return (temp_dict)

if __name__ == "__main__":

	my_dict = {}

	if (len(sys.argv) <= 1):
		print("Missing arguments!")
	
	else:
		print("\n=== Inventory System Analysis ===\n")
		my_dict = clean_kv(sys.argv)

		print(f"\nGot inventory: {my_dict}")
		key_lst = list(my_dict.keys())
		print(f"Item list: {key_lst}")

		sum = 0
		for val in my_dict.values():
			sum += val
		print(f"Total quantity of the {len(key_lst)} items: {sum}")
		item:str = None
		max = max(my_dict.values())
		for p in my_dict:
			print(f"Item {p} represents {(my_dict[p] * 100 / sum):.1f}%")
			if (my_dict[p] == max):
				item = p
				break
		
		min = min(my_dict.values())
		for p in my_dict:
			if (my_dict[p] == min):
				item = p
				break

		print(f"Item most abundant: {item} with quantity {max}")
		print(f"Item least abundant: {item} with quantity {min}")

		my_dict["magic_item"] = 1
		print(f"\nUpdated inventory: {my_dict}\n")
