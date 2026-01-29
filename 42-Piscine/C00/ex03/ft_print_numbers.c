/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 09:45:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 19:27:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void ft_print_numbers(void);
// int main () {
// 	ft_print_numbers();
//     return 0;
// }

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	do {
		write (1, &c, 1);
	c++;
}
while
(c <= 57);

}

//cc  -Wall -Wextra -Werror 