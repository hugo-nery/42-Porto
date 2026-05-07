/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:21:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/07 12:50:24 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*Will return the len of the string passed.*/
size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*Will return a new string with s1 then s2 copied to it.*/
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

/*Will return a new string, copying 'len' chars from 'start'.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
