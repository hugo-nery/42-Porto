/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:21:28 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 13:31:17 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (src_ptr > dest_ptr)
	{
		while ((n--) > 0)
			*(dest_ptr++) = *(src_ptr++);
	}
	else if (dest_ptr > src_ptr)
	{
		while ((n--) > 0)
			dest_ptr[n] = src_ptr[n];
	}
	return (dest);
}
