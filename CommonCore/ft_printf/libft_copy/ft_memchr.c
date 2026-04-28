/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:35:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/21 14:58:35 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;

	s_ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char) c)
			return ((void *) &s_ptr[i]);
		i++;
	}
	return (NULL);
}
