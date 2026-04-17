/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:52:54 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/15 13:35:08 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// void ft_print_alphabet(void);

// int main (){

//     ft_print_alphabet();

//     return 0;
// }

// void ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
		ft_putchar(c++);
}
