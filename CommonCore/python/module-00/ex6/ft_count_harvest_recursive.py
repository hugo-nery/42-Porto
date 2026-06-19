# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_count_harvest_recursive.py                       :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 18:02:53 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/19 13:24:01 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def less_days(i: int, days: int) -> None:
    if (days > 0 and i <= days):
        print("Day", i)
        less_days(i + 1, days)
    else:
        print("Harvest time!\n")

def ft_count_harvest_recursive() -> None:
    days = int(input("Days until harvest: "))
    less_days(1, days)
