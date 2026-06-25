# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_raise_exception.py                               :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/25 10:42:38 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/25 16:23:09 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def input_temperature(temp_str: str) -> int:
    temp_int = int(temp_str)
    if (0 <= temp_int <= 40):
        return (temp_int)
    if (temp_int < 0):
        raise Exception(f"{temp_int}°C is too cold for plants (min 0°C)")
    else:
        raise Exception(f"{temp_int}°C is too hot for plants (max 40°C)")


def test_temperature() -> None:
    my_temp = "25"
    print(f"\nInput data is '{my_temp}'")
    try:
        temp_int = input_temperature(my_temp)
        print(f"Temperature is now {temp_int}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    my_temp = "abc"
    print(f"\nInput data is '{my_temp}'")
    try:
        temp_int = input_temperature(my_temp)
        print(f"Temperature is now {temp_int}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    my_temp = "100"
    print(f"\nInput data is '{my_temp}'")
    try:
        temp_int = input_temperature(my_temp)
        print(f"Temperature is now {temp_int}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    my_temp = "-50"
    print(f"\nInput data is '{my_temp}'")
    try:
        temp_int = input_temperature(my_temp)
        print(f"Temperature is now {temp_int}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")


if __name__ == "__main__":
    print("=== Garden Temperature Checker ===")
    test_temperature()
    print("\nAll tests completed - program didn't crash!")
