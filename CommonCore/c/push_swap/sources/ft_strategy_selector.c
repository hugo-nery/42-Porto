/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy_selector.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:41:42 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/09 19:41:42 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_bench_selector(int *this_argc, char ***this_argv,
				t_bench *bench);

void	ft_strategy_selector(int *this_argc, char ***this_argv, t_bench *bench)
{
	ft_bench_selector(this_argc, this_argv, bench);
	if (bench && ((*this_argv)[1][0] == '-' && (*this_argv)[1][1] == '-'))
	{
		if (ft_strcmp((*this_argv)[1], STRA_SIMPLE) == 0)
			bench->strategy = STRA_SIMPLE;
		else if (ft_strcmp((*this_argv)[1], STRA_MEDIUM) == 0)
			bench->strategy = STRA_MEDIUM;
		else if (ft_strcmp((*this_argv)[1], STRA_COMPLEX) == 0)
			bench->strategy = STRA_COMPLEX;
		else if (ft_strcmp((*this_argv)[1], "") != 0
			&& ft_strcmp((*this_argv)[1], STRA_ADAPTIVE) != 0)
			bench->strategy = "Invalid";
		else
			bench->strategy = STRA_ADAPTIVE;
		if (ft_strcmp(bench->strategy, "Invalid") != 0)
		{
			(*this_argv)++;
			(*this_argc)--;
		}
	}
}

static void	ft_bench_selector(int *this_argc, char ***this_argv,
		t_bench *bench)
{
	if (bench && ((*this_argv)[1][0] == '-' && (*this_argv)[1][1] == '-'))
	{
		if (ft_strcmp((*this_argv)[1], BENCH_MARK) == 0)
		{
			bench->on_off = 1;
			(*this_argv)++;
			(*this_argc)--;
			if (*(this_argc) < 2)
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
		}
	}
}
