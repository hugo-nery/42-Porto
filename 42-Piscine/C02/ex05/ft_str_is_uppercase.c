/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:30:09 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 22:25:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_str_is_uppercase(char *str);

// int main () {

//     char text[] = "ABCaD";

//     printf("%d", ft_str_is_uppercase(text));

//     return 0;
// }

int	ft_str_is_uppercase(char *str)
{
	if (str == NULL)
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
