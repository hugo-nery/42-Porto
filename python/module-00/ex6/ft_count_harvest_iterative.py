# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_iterative.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 21:32:01 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/13 21:36:55 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_count_harvest_iterative():
	days = int(input("Days until harvest: "))
	i = 1
	while (i <= days):
		print("Day ", i)
		i += 1
	print("Harvest time!")

ft_count_harvest_iterative()