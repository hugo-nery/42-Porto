/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:17:23 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 13:31:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t w_count;
	char **my_av;

	printf("%c", c);

	my_av = NULL;
	while (*s)
	{
		
		printf("%c", *(s++));
	}

	return (my_av);
}
