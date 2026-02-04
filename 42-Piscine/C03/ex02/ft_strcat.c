/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:18:12 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/04 11:30:29 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strcat(char *dest, char *src);

// int main () {

// 	// char text[] = "World!";

// 	char dest[35] = "Everything stays the same";

// 	printf("%s\n", ft_strcat (dest, ", right!?"));

// 	// printf("%s\n", dest);

// 	return 0;
// }

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;

	if (dest != NULL)
	{
		d_len = 0;
		while (dest[d_len] != '\0')
		{
			d_len++;
		}
		if (src != NULL)
		{
			i = 0;
			while (src[i] != '\0')
			{
				dest[d_len + i] = src[i];
				i++;
			}
			dest[d_len + i] = '\0';
		}
		return (dest);
	}
	return (NULL);
}
