# *************************************************************************** #
#                                                                             #
#                                                         :::      ::::::::   #
#   ft_plot_area.py                                     :+:      :+:    :+:   #
#                                                     +:+ +:+         +:+     #
#   By: hde-albu <hde-albu@student.42porto.com>     +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+           #
#   Created: 2026/06/18 17:57:13 by hde-albu           #+#    #+#             #
#   Updated: 2026/06/18 18:01:26 by hde-albu          ###   ########.fr       #
#                                                                             #
# *************************************************************************** #

def ft_plot_area() -> None:
    length = int(input("Enter length: "))
    width = int(input("Enter width: "))
    print("Plot area: ", length * width)
