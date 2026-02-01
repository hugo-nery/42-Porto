/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:31:17 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 23:05:57 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strupcase(char *str);

// int main () {
//     char text[] = "hugo - Nery";
//     ft_strupcase(text);
//     printf("%s", text);
//     return 0;
// }

char	*ft_strupcase(char *str)
{
	int	i;
	
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// cc -Wall -Wextra -Werror