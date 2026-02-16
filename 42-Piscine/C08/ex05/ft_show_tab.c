/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:33:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/16 20:50:40 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_stock_str.h"

void	ft_printnum(int num);
void	ft_printstr(char *str);
void	ft_show_tab(struct s_stock_str *par);

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*tab;

// 	if (argc <= 1)
// 		ft_printstr("Not enough args");
// 	else
// 	{
// 		tab = ft_strs_to_tab(argc, argv);
// 		ft_show_tab (tab);
// 	}
// 	return (0);
// }

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_printnum(par[i].size);
		write (1, " - ", 3);
		ft_printstr(par[i].str);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_printnum(int num)
{
	long	n;

	n = num;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_printnum (n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
