/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:28:59 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/16 16:56:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_free(char **arr, size_t i);
size_t ft_strlen(const char *str);
size_t ft_word_count(const char *str, char sep);

char **ft_split(const char *str, char sep)
{
	char **my_av;
	size_t wc;
	size_t len;
	size_t i;

	wc = ft_word_count(str, sep);
	my_av = malloc((wc + 1) * sizeof(char *));
	if (!my_av)
		return (NULL);
	wc = 0;
	while (*str)
	{
		len = 0;
		if (str[len] != sep)
		{
			while (str[len] && str[len] != sep)
				len++;
			my_av[wc] = malloc((len + 1) * sizeof(char));
			if (!my_av[wc])
				return (ft_free(my_av, wc), NULL);
			i = 0;
			while (i < len)
				my_av[wc][i++] = *(str++);
			my_av[wc][len] = '\0';
			wc++;
		}
		else
			str++;
	}
	my_av[wc] = NULL;
	return (my_av);
}
void ft_free(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);	
}

size_t ft_word_count(const char *str, char sep)
{
	size_t count;

	count = 0;
	while (str && *str)
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
	char **my_av;
	
	if (argc > 2)
	{
		my_av = ft_split(argv[1], argv[2][0]);
		while (my_av && *my_av)
		{
			printf("%s\n", *(my_av++));
		}
	}	
	else
		printf("invalid input\n");
	return (0);
}