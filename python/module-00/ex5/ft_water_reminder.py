# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_water_reminder.py                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 21:06:58 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/13 21:31:03 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_water_reminder():
	days = int(input("Days since last watering: "))
	if (days > 2):
		print("Water the plants!")
	else:
		print("Plants are fine")

ft_water_reminder()