/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:26:08 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 22:43:25 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_str_is_alpha(char *str);

// int main () {

// 	char text[] = "BCdefdf";

// 	printf("\n%d\n\n",ft_str_is_alpha(text));

//     return 0;
// }

int	ft_str_is_alpha(char *str)
{
	if (str == NULL)
	{
		return (1);
	}
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z')
			&& ((*str < 'a' || *str > 'z')))
		{
			return (1);
		}
		str++;
	}
	return (0);
}
// A = 65 - Z = 90
// a = 97 - z = 122

// cc -Wall -Wextra -Werror