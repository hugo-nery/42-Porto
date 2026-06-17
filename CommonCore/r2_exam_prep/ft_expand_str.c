/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 18:08:12 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 10:49:57 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes a string and displays it with exactly three spaces
// between each word, with no spaces or tabs either at the beginning or the end,
// followed by a newline.

// A word is a section of string delimited either by spaces/tabs, or by the
// start/end of the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

#include <unistd.h>

int ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

void ft_expand_str(const char *str)
{
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;

		while (*str && !ft_isspace(*str))
			write(1, &*(str++), 1);
		
		while (*str && ft_isspace(*str))
			str++;

		if(*str != '\0')
			write(1, "   ", 3);
	}
}

int main(int argc, char **argv)
{
	char *str;
	
	if (argc != 2 || argv[1][0] == '\0')
		return (write(1 , "\n", 1));	
	ft_expand_str(argv[1]);
	return (0);
}

