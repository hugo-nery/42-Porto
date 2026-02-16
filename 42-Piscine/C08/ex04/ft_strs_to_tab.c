/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:09:33 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/16 20:55:29 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str);
char				*ft_strdup(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

// int main (int argc, char **argv){

//     if (argc <= 1)
//         printf ("Not enough args");

//     else
//         ft_strs_to_tab(argc, argv);

//     return 0;
// }

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (stock == NULL)
		return (NULL);
	i = 1;
	while (i < ac)
	{
		stock[i - 1].size = ft_strlen(av[i]);
		stock[i - 1].str = av[i];
		stock[i - 1].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i - 1].str = 0;
	return (stock);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		str_len;
	int		i;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);
	copy = malloc((str_len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
