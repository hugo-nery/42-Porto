/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:12:01 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 15:43:10 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len_s;

	if (src != NULL && dest != NULL)
	{
		len_s = 0;
		while (src[len_s] != '\0')
		{
			len_s++;
		}
		if (size > 0)
		{
			i = 0;
			while (i < (int)size - 1 && src[i] != '\0')
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		return (len_s);
	}
	return (0);
}

// cc -Wall -Wextra -Werror

// int main () {

// 	char text[] = "Verify";
// 	char dest[10];

// 	printf("%s\n", text);
// 	printf("%d\n", ft_strlcpy(dest, text, 0));
// 	printf("%s\n", dest);
//     return 0;
// }