/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:33:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/18 22:44:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

# include <unistd.h>
# include <stdlib.h>

void	ft_print_num(int num);
void	ft_print_str(char *str);
void	ft_show_tab(struct s_stock_str *par);

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*tab;

// 	if (argc <= 1)
// 		ft_print_str("Not enough args");
// 	else
// 	{
// 		tab = ft_strs_to_tab(argc - 1, &argv[1]);
// 		ft_show_tab (tab);
// 	}
// 	return (0);
// }

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_print_str(par[i].str);
		ft_print_str("\n");
		ft_print_num(par[i].size);
		ft_print_str("\n");
		ft_print_str(par[i].copy);
		ft_print_str("\n");
		i++;
	}
}

void	ft_print_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_num(int num)
{
	long	n;

	n = num;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_print_num (n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
