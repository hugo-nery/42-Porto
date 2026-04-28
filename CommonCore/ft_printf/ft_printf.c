/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:37:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/27 17:04:27 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//#define FT_PRINTF(a,...) sum( a, (5, ##__VA_ARGS__) )
static void print_line_break(char *str);


void ft_printf(void *input)
{
	char *str;

	str = (char *) input;

	while (*str)
	{
		if (*str == '\\')
			print_line_break(str);
		write(1, &(*(str++)), 1);
	}
		
}

static void print_line_break(char *str)
{
	if ((*str)+1 == 't')
		write(1, "    ", 4);
	else if ((*str)+1 == 'n')
		write(1, "\n", 1);
	else if ((*str)+1 == 'v')
		write(1, "\n\n\n\n", 4);
	else
		write(1, "\\", 1);		
	str++;
}