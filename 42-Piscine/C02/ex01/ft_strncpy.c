/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:52:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 22:11:05 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main () {
//     char src[] = "42 Hugo";
//     char dest[] = "10 Porto - Portugal!";

//     printf("%s\n",src);
//     printf("%s\n",dest);

//     ft_strncpy(dest, src, 10);

//     printf("%s\n",src);
//     printf("%s\n",dest);

//     return 0;
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (src != NULL && dest != NULL)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// cc -Wall -Wextra -Werror