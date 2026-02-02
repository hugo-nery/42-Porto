/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:44:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 17:33:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strlowcase(char *str);

// int main () {
// 	char text[] = "HUGO nery";
// 	ft_strlowcase(NULL);
// 	printf("%s",text);
//     return 0;
// }

char	*ft_strlowcase(char *str)
{
	int	i;

	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			i++;
		}
	}
	return (str);
}

// cc -Wall -Wextra -Werror