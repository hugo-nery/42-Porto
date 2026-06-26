# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_achievement_tracker.py                           :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/26 18:04:02 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/26 18:53:09 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import random

#len(), print(), random.*, set(), set.union(),
#set.intersection(), set.difference()

def gen_player_achievements():
	my_list = [n for n in range(1, 101)]
	players = ["Alice", "Bob", "Charlie", "Dylan"]
	players_sets = []
	
	for p in players:
		p = set()
		for i in range(5):
			p.add(random.choice(my_list))
		players_sets.append(p)

	for i in range(len(players)):
		print(f"{players[i]}: {players_sets[i]}")
	
	inter_ab = set.intersection(players_sets[0], players_sets[1])
	inter_cd = set.intersection(players_sets[2], players_sets[3])
	print(f"Common: {set.intersection(inter_ab, inter_cd)}")

	alice = set.difference(players_sets[0], players_sets[1], players_sets[2], players_sets[3])
	print(f"\nOnly Alice has: {alice}")



if __name__ == "__main__":
	print("=== Achievement Tracker System ===")
	gen_player_achievements()
	
	
	# print(f"\nCommon achievements: {set.intersection()}")