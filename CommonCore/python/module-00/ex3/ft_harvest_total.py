# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_harvest_total.py                                 :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/13 20:56:09 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/18 18:04:14 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_harvest_total():
    total = int(input("Day 1 harvest: "))
    total += int(input("Day 2 harvest: "))
    total += int(input("Day 3 harvest: "))
    print("Total harvest:", total)
