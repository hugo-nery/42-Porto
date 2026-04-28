/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:18:51 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/20 22:00:13 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *sub, size_t len)
{
	size_t	i;
	size_t	x;

	if (*sub == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == sub[x] && (i + x) < len)
			x++;
		if (sub[x] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
