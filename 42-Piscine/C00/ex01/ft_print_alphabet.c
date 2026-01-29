/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:20:33 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 19:04:20 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_print_alphabet(void);

// int main () {
//     ft_print_alphabet();
// 	return 0;
// }

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	do {
		write (1, &c, 1);
	c++;
}
while
(c <= 122);

}

//cc  -Wall -Wextra -Werror 