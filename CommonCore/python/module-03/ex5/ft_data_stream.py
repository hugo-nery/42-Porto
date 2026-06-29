# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_data_stream.py                                   :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/29 16:32:21 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/29 17:07:36 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import typing
import random

def gen_event() -> typing.Generator:
	players_lst = ["bob", "alice", "dylan", "charlie"]
	action_lst = ["run", "eat", "sleep", "grab", "move", "climb", "swim", "release"]
	while True:
		yield(random.choice(players_lst), random.choice(action_lst))

if __name__ == "__main__":
	print("=== Game Data Stream Processor ===")
	for i in range(10):
		tp = next(gen_event())
		print(f"Event {i}: {tp}")
