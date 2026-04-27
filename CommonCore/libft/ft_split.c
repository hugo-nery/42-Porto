/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:17:23 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/27 12:34:44 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(int i, char **arr);
static int	ft_wcount(char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**my_av;
	size_t	w_count;
	size_t	w_len;
	size_t	i;

	w_count = ft_wcount((char *)s, c);
	my_av = malloc((w_count + 1) * sizeof(char *));
	if (!my_av)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		w_len = 0;
		while (s[w_len] == c)
			s++;
		while (s[w_len] != c && s[w_len] != '\0')
			w_len++;
		my_av[i] = malloc((w_len + 1) * sizeof(char));
		if (!my_av[i])
			return (ft_free(i, my_av), NULL);
		ft_strlcpy(my_av[i], s, w_len + 1);
		s = &s[w_len];
		i++;
	}
	return (my_av[w_count] = 0, my_av);
}

static void	ft_free(int i, char **arr)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

static int	ft_wcount(char *str, char c)
{
	size_t	w_count;

	w_count = 0;
	if (*str != c && *str != '\0')
	{
		w_count++;
		str++;
	}
	while (*str)
	{
		if (*str == c && *(str + 1) != c && *(str + 1) != '\0')
			w_count++;
		str++;
	}
	return (w_count);
}
