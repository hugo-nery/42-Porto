/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:54:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/03 20:03:27 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_strncmp(char *s1, char *s2, unsigned int n);

// int main() {

//     printf("%d", ft_strncmp("ABCF", "ABCD", 3));

//     return 0;
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (s1 != NULL && s2 != NULL && n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}
