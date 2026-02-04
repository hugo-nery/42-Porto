/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:04:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/04 10:39:01 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strcat(char *dest, char *src);

// int main () {

// 	// char text[] = "World!";

// 	char dest[30] = "Everything stays the same";

// 	ft_strcat (dest, "");

// 	printf("%s\n", dest);

// 	return 0;
// }

int	my_str_len(char *str)
{
	int	i;

	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;
	int	dest_len;

	if (src != NULL && dest != NULL)
	{
		i = my_str_len(dest);
		dest_len = my_str_len(src);
		x = 0;
		while (x < dest_len)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
