/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:45:55 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/27 12:34:53 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			len;

	if (size != 0 &&  nmemb > __SIZE_MAX__ / size)
		return (NULL);
	len = nmemb * size;
	arr = malloc(len);
	if (!arr)
		return (NULL);
	while ((len--) > 0)
		arr[len] = 0;
	return ((void *)arr);
}
