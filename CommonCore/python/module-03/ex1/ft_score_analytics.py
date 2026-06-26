# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_score_analytics.py                               :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/26 12:08:44 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/26 13:11:02 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import sys

def ft_atoi(str_num: str) -> int:
    return (int(str_num))

if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    if (len(sys.argv) == 1):
        print("No scores provided."
              " Usage: python3 ft_score_analytics.py <score1> <score2> ...\n")
    else:
        points_lst = []
        total_score = 0
        i = 1
        while (i < len(sys.argv)):
            try:
                n = ft_atoi(sys.argv[i])
                points_lst.append(n)
                total_score += n
            except:
                print(f"Invalid parameter: '{sys.argv[i]}'")
            i += 1

        total_players = len(points_lst)
        if (total_players > 0):
            print(f"Scores processed: {points_lst}")
            print(f"Total players: {total_players}")
            print(f"Total score: {total_score}")
            print(f"Average score: {(total_score / total_players):.1f}")
            print(f"Highest score: {max(points_lst)}")
            print(f"Lowest score: {min(points_lst)}")
            print(f"Score range: {max(points_lst) - min(points_lst)}\n")
        else:
            print("No scores provided."
                  " Usage: python3 ft_score_analytics.py <score1> <score2> ...\n")
