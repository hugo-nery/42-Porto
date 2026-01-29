/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:41:46 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 19:04:28 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_print_reverse_alphabet(void);
// int main() {
//     ft_print_reverse_alphabet();
//     return 0;
// }

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	do {
		write (1, &c, 1);
	c--;
}
while
(c >= 97);

}

//cc  -Wall -Wextra -Werror 