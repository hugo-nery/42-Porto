# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_coordinate_system.py                             :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/26 12:57:18 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/30 17:36:46 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import math


def get_player_pos() -> tuple[float, float, float]:
    my_tp: tuple[float, float, float] = (0.0, 0.0, 0.0)
    while (True):
        tp = input("- Enter new coordinates as"
                   " floats in format 'x,y,z': ").replace(" ", "")
        try:
            x, y, z = tp.split(",")
            x_f = float(x)
            y_f = float(y)
            z_f = float(z)
            my_tp = (x_f, y_f, z_f)
            return my_tp
        except Exception as e:
            if ("unpack" in str(e)):
                print("- Invalid syntax")
            else:
                p = str(e).find(":")
                print(f"- Error on parameter {str(e)[p+2:]}: "
                      f"could not convert string to float: {str(e)[p+2:]}")


def distance_to_center(tp_b: tuple[float, float, float],
                       tp_a: tuple[float, float, float] = (0, 0, 0)) -> float:
    x = math.pow((tp_b[0] - tp_a[0]), 2)
    y = math.pow((tp_b[1] - tp_a[1]), 2)
    z = math.pow((tp_b[2] - tp_a[2]), 2)
    return (math.sqrt(x + y + z))


if __name__ == "__main__":
    print("=== Game Coordinate System ===")
    print("\nEnter a first set of coordinates:")
    tp_1 = get_player_pos()
    print(f"\n- Got a first tuple: ({', '.join([str(n) for n in tp_1])})")
    print(f"- It includes: X = {tp_1[0]}, Y = {tp_1[1]}, Z = {tp_1[2]}")
    print(f"- Distance to center: {distance_to_center(tp_1):.4f}")

    print("\nEnter a second set of coordinates:")
    tp_2 = get_player_pos()
    print(f"\n- Got a second tuple: ({', '.join([str(n) for n in tp_2])})")
    print("- Distance between the 2 sets of coordinates: "
          f"{distance_to_center(tp_2, tp_1):.4f}\n")
