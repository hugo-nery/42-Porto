#!/usr/bin/env python3

import random


if __name__ == "__main__":

    in_lst = ["Alice", "bob", "Charlie", "dylan", "Emma", "Gregory", "john",
              "kevin", "Liam"]

    print("=== Game Data Alchemist ===")
    print(f"Initial list of players: {in_lst}")

    all_cap_lst = [p.capitalize() for p in in_lst]
    print(f"New list with all names capitalized: {all_cap_lst}")

    only_cap_lst = [p for p in in_lst if (p.capitalize() == p)]
    print(f"New list of capitalized names only: {only_cap_lst}")

    score_dict = {p: int(random.random() * 1000) for p in all_cap_lst}
    print(f"Score dict: {score_dict}")

    avg_score = sum(score_dict.values()) / len(score_dict.keys())
    print(f"Score average is {avg_score:.2f}")

    high_score_dict = {k: score_dict[k] for k in score_dict
                       if score_dict[k] >= avg_score}
    print(f"High scores: {high_score_dict}")
