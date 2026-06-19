# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_count_harvest_iterative.py                       :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 18:02:26 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/18 18:04:41 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_count_harvest_iterative() -> None:
    days = int(input("Days until harvest: "))
    i = 1
    while (i <= days):
        print("Day ", i)
        i += 1
    print("Harvest time!")
