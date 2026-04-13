/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:02:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 21:06:40 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putstr(char *str);

// int main(){

// 	ft_putstr("xixi");

// 	return 0;
// }

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*(str++)), 1);
}
