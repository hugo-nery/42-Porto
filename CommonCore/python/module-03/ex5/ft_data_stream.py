# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_data_stream.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/29 16:32:21 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/30 17:34:12 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import typing
import random


def gen_event() -> typing.Generator[tuple[str, str], None, None]:
    players_lst = ["bob", "alice", "dylan", "charlie", "hugo"]
    action_lst = ["run", "eat", "sleep", "grab", "move", "climb", "swim",
                  "release", "walk", "drink"]
    while True:
        yield (random.choice(players_lst), random.choice(action_lst))


def consume_event(tp_lst: list[tuple[str, str]]
                  ) -> typing.Generator[tuple[str, str], None, None]:
    while (len(tp_lst) > 0):
        el_tp = random.choice(tp_lst)
        copy = el_tp
        tp_lst.remove(el_tp)
        yield (copy)


if __name__ == "__main__":
    print("=== Game Data Stream Processor ===\n")
    for i in range(10):
        tp = next(gen_event())
        print(f"Event {i}: Player {tp[0]} did action {tp[1]}")

    tp_lst = []
    for i in range(10):
        tp_lst.append(next(gen_event()))
    print(f"\nBuilt list of 10 events: {tp_lst}\n")

    print("=== Choosing and deleting\n")
    for e in consume_event(tp_lst):
        print(f"Got event from list: {e}")
        print(f"Remains in list: {tp_lst}\n")
