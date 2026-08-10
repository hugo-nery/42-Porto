# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plant_age.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 21:00:40 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/14 22:00:24 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_plant_age():
	days = int(input("Enter plant age in days: "))
	if (days >= 60):
		print("Plant is ready to harvest!")
	else:
		print("Plant needs more time to grow.")
		# print("Plant will be ready in", 60 - days, "day(s).")

ft_plant_age()