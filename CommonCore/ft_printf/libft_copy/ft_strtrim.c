/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:26:41 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 12:16:41 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char *str, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*s1_ptr;
	char			*trimmed;
	size_t			len;

	s1_ptr = (unsigned char *)s1;
	while (ft_isin((char *) set, *s1_ptr))
		s1_ptr++;
	len = ft_strlen((const char *) s1_ptr);
	while (ft_isin((char *) set, s1_ptr[len - 1]))
		len--;
	trimmed = malloc((len + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, (char *)s1_ptr, len + 1);
	return (trimmed);
}

static int	ft_isin(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
