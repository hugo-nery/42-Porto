# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_recursive.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 21:37:09 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/17 17:03:48 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def less_days(i: int, days: int):
	print("Day", i)
	if (i < days):
		less_days(i + 1, days)
	else:
		print("Harvest time!")

def ft_count_harvest_recursive():
	days = int(input("Days until harvest: "))
	i = 1
	less_days(i, days)

ft_count_harvest_recursive()