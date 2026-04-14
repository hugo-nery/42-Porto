/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:26:16 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 12:43:36 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
void	ft_strcpy(char *src, char *dest);

// #include <stdio.h>

// int main (int argc, char **argv)
// {
// 	printf("%s", ft_strdup(argv[1]));

// 	return 0;
// }

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc ((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	else
		ft_strcpy(src, dup);
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *src, char *dest)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
}
