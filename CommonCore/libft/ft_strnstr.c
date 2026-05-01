/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 22:18:51 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/01 14:44:57 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (!big && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] && big[i + x] == little[x] && (i + x) < len)
		{
			if (little[x + 1] == '\0')
				return ((char *) &big[i]);
			x++;
		}
		i++;
	}
	return (NULL);
}
