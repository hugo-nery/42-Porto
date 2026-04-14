/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:02:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 15:40:39 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void ft_putchar (char c);
// void ft_putstr(char *str);

// int main(){

// 	ft_putstr("xixi");

// 	return 0;
// }

// void ft_putchar (char c)
// {
// 	write (1, &c, 1);
// }

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}
