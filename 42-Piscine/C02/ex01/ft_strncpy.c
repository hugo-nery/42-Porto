/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:52:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 17:09:43 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main () {
//     char src[] = "42 Hugo";
//     char dest[] = "Porto - Portugal!";
//     printf("%s\n",src);
//     printf("%s\n",dest);
//     ft_strncpy(dest, src, 8);
//     printf("%s\n",src);
//     printf("%s\n",dest);
//     return 0;
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && *dest)
	{
		if (src[i] != '\0')
		{
			*dest = src[i];
			dest++;
			i++;
		}
		else
		{
			while (*dest)
			{
				*dest = '\0';
				dest++;
			}
		}
	}
	return (dest);
}

// cc -Wall -Wextra -Werror