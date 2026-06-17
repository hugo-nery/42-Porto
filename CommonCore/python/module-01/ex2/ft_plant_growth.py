# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plant_growth.py                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/17 17:47:04 by hde-albu          #+#    #+#              #
#    Updated: 2026/06/17 18:07:27 by hde-albu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class Plant:
	def __init__(self, name : str, height : int, age : int):
		self.name = name
		self.height = height
		self.age = age

	def ft_age(self):
		self.age += 1
		
	def ft_grow(self):
		self.height = self.height * 1.04
		self.ft_age()

def show(plants):
	for p in plants:
		print(f"{p.name}: {p.height}cm, {p.age} days old")
	print()

if __name__ == "__main__":
	rose = Plant("Rose", 25, 30)
	sunflower = Plant("Sunflower", 75, 20)
	cactus = Plant("Cactus", 210, 185)

	plants = [rose, sunflower, cactus]
	
	print("\n=== Garden Plant Growth ===\n")
	show(plants)
	rose.ft_grow()
	show(plants)