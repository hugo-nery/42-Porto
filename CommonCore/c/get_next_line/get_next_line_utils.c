/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:21:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/12 20:12:03 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*Will return the len of the string passed if c is '\0', 
** or the when if find c (inclusive).*/
size_t	ft_strlen_vc(const char *str, char c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (i);
}

/*Will return the rest of the string from the point it matched.*/
char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (NULL);
}

/*Will return a new string, copying 'len' chars from the 'start' point.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen_vc(s, '\0');
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

/*Will return a new string with s1 then s2 copied to it.*/
char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*big;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen_vc(s1, '\0');
	s2_len = ft_strlen_vc(s2, '\0');
	big = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!big)
		return (free((void *)s1), NULL);
	i = -1;
	while (s1 && s1[++i])
		big[i] = s1[i];
	i = -1;
	while (s2 && s2[++i])
		big[i + s1_len] = s2[i];
	big[s1_len + s2_len] = '\0';
	if (s1)
		free ((void *)s1);
	return (big);
}
