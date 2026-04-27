/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:11:15 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 10:26:10 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*big;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	big = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!big)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		big[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		big[i + s1_len] = s2[i];
		i++;
	}
	big[s1_len + s2_len] = '\0';
	return (big);
}
