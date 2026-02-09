/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:32:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 12:56:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

// int main () {

//     char dest[5] = "Full";
//     char src[] = "Stack";

//     printf("t_%d", ft_strlcat(dest, src, 5));

//     printf("\n%s", dest);

//     return 0;
// }

int	my_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ds_len;
	unsigned int	sr_len;

	if (dest != NULL && src != NULL)
	{
		sr_len = my_len(src);
		ds_len = my_len(dest);
		if (size <= ds_len)
		{
			return (size + sr_len);
		}
		i = 0;
		while (i < size - ds_len - 1 && src[i] != '\0')
		{
			dest[ds_len + i] = src[i];
			i++;
		}
		dest[ds_len + i] = '\0';
		return (ds_len + sr_len);
	}
	return (0);
}
