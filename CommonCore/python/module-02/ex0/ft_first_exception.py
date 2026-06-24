# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_first_exception.py                               :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/24 17:15:38 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/24 17:38:13 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def input_temperature(temp_str) -> int:
	print(f"Input data is {temp_str}")
	return (int(temp_str))


def test_temperature() -> None:
	my_temp = "25"
	if (not isinstance(input_temperature(my_temp)), float):
		print("Caught input_temperature error:"
			f"invalid literal for int() with base 10: {my_temp}")
	else:
		print(f"Temperature is now 25°C")

	my_temp = "abc"
	if (not isinstance(input_temperature(my_temp)), float):
		print("Caught input_temperature error:"
		f"invalid literal for int() with base 10: {my_temp}")
	else:
		print(f"Temperature is now 25°C")

if __name__ == "__main__":
	print("=== Garden Temperature ===")
	test_temperature()
	