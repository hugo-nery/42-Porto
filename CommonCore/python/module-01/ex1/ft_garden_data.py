# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_garden_data.py                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 16:46:38 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/17 17:46:46 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class Plant:
	def __init__(self, name, height, age):
		self.name = name
		self.height = height
		self.age = age

def show(plants):
	print("=== Garden Plant Registry ===")
	for p in plants:
		print(f"{p.name}: {p.height}cm, {p.age} days old")

if __name__ == "__main__":

	rose = Plant("Rose", 25, 30)
	sunflower = Plant("Sunflower", 80, 45)
	cactus = Plant("Cactus", 15, 120)
	plants = [rose, sunflower, cactus]
	show(plants)
