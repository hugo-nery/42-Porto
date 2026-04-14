/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:59:06 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 15:40:21 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void ft_putchar (char c);
// void ft_print_numbers(void);

// int main ()
// {
//     ft_print_numbers();

//     return 0;
// }

// void ft_putchar (char c)
// {
// 	write (1, &c, 1);
// }

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
		ft_putchar(n++);
}
