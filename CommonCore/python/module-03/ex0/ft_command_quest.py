# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_command_quest.py                                 :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/25 16:48:59 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/26 12:56:49 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

import sys

if __name__ == "__main__":
	print("=== Command Quest ===")
	print(f"Program name: {sys.argv[0]}")
	if (len(sys.argv) == 1):
		print("No arguments provided!")
		print(f"Total arguments: {len(sys.argv)}\n")

	else:
		print(f"Arguments received: {len(sys.argv) - 1}")
		i = 1
		while (i < len(sys.argv)):
			print(f"Argument {i}: {sys.argv[i]}")
			i += 1
		print(f"Total arguments: {len(sys.argv)}\n")
