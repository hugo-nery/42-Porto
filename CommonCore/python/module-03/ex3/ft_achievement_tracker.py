# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_achievement_tracker.py                           :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/26 18:04:02 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/30 17:35:47 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import random


def gen_player_achievements(nb_player: int = 4) -> list[set[str]]:
    my_list = ['Crafting Genius', 'Strategist', 'World Savior', 'Speed Runner',
               'Survivor', 'Master Explorer', 'Treasure Hunter', 'Unstoppable',
               'First Steps', 'Collector Supreme', 'Untouchable', 'Sharp Mind',
               'Boss Slayer']
    players_sets: list[set[str]] = []

    for i in range(nb_player):
        temp = set()
        for i in range(8):
            n = random.choice(my_list)
            while (n in temp):
                n = random.choice(my_list)
            temp.add(n)
        players_sets.append(temp)
    return (players_sets)


if __name__ == "__main__":
    print("=== Achievement Tracker System ===\n")

    players_set = gen_player_achievements()
    players = ["Alice", "Bob", "Charlie", "Dylan"]
    for i in range(len(players)):
        print(f"Player {players[i]}: {players_set[i]}")

    total = set.union(players_set[0], players_set[1],
                      players_set[2], players_set[3])
    print(f"\nAll distinct achievements: {total}")

    inter_ab = set.intersection(players_set[0], players_set[1])
    inter_cd = set.intersection(players_set[2], players_set[3])
    print(f"\nCommon achievements: {set.intersection(inter_ab, inter_cd)}\n")

    alice = set.difference(
        players_set[0], players_set[1], players_set[2], players_set[3])
    print(f"Only Alice has: {alice}")

    bob = set.difference(
        players_set[1], players_set[0], players_set[2], players_set[3])
    print(f"Only Bob has: {bob}")

    charlie = set.difference(
        players_set[2], players_set[0], players_set[1], players_set[3])
    print(f"Only Charlie has: {charlie}")

    dylan = set.difference(
        players_set[3], players_set[0], players_set[1], players_set[2])
    print(f"Only Dylan has: {dylan}")

    print(f"\nAlice is missing: {set.difference(total, players_set[0])}")
    print(f"Bob is missing: {set.difference(total, players_set[1])}")
    print(f"Charlie is missing: {set.difference(total, players_set[2])}")
    print(f"Dylan is missing: {set.difference(total, players_set[3])}")
