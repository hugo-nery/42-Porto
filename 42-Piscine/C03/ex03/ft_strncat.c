/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:29:00 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/04 11:44:13 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strncat(char *dest, char *src, unsigned int nb);

// int main () {

// 	char src[] = "-World!";
// 	char dest[20] = "Hello Hello";

// 	ft_strncat(dest, src, 2);

// 	printf("\n%s", dest);

// 	return 0;
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	if (dest != NULL)
	{
		dest_len = 0;
		while (dest[dest_len] != '\0')
		{
			dest_len++;
		}
		if (src != NULL)
		{
			i = 0;
			while (i < nb && src[i] != '\0')
			{
				dest[dest_len + i] = src[i];
				i++;
			}
			dest[dest_len + i] = '\0';
		}
		return (dest);
	}
	return (NULL);
}
