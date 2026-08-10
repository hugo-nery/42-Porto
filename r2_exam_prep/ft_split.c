/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:28:59 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/16 12:47:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *str);
size_t ft_word_count(const char *str, char sep);

char **ft_spli(const char *str, char sep)
{
	char **my_av;
	size_t wc;
	size_t len;

	wc = ft_word_count(str, sep);
	my_av = malloc((wc + 1) * sizeof(char *));
	if (!my_av)
		return (NULL);
	while (*str)
	{
		str++;
	}
	
	
	
}

size_t ft_word_count(const char *str, char sep)
{
	size_t count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str != sep)
		{
			count++;
			while (*str && *str != sep)
				str++;
		}
		else
			str++;
	}
	return (count);
}

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

#include <stdio.h>

int main(int argc, char **argv)
{		
	if (argc > 2)
		printf("%d\n", (int)ft_word_count(argv[1], argv[2][0]));
	else
		printf("invalid input\n");
	return (0);
}