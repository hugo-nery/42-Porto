# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_water_reminder.py                                :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 18:02:08 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/18 18:04:27 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_water_reminder() -> None:
    days = int(input("Days since last watering: "))
    if (days > 2):
        print("Water the plants!")
    else:
        print("Plants are fine")
