# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plant_age.py                                     :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 17:57:58 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/19 13:28:11 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_plant_age() -> None:
    days = int(input("Enter plant age in days: "))
    if (days > 60):
        print("Plant is ready to harvest!")
    else:
        print("Plant needs more time to grow.")
        # print("Plant will be ready in", 61 - days, "day(s).")
