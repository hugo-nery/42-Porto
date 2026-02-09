/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:38:28 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 14:59:18 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void ft_putstr(char *str);

// int main () {

// 	ft_putstr("hugo nery");

// 	return 0;
// }

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			write (1, &(*(str++)), 1);
}

// void ft_putstr(char *str)
// {
// 	int	i;

// 	if (str != NULL)
// 	{
// 		i = 0;
// 		while (str[i] != '\0')
// 		{
// 			write(1,&str[i],1);
// 			i++;
// 		}
// 	}
// }