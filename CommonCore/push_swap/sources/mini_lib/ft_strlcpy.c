/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:25:12 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/09 19:59:34 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_lib.h"

static int	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}
