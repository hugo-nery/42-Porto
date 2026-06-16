/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   benchmark.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:21:44 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/12 19:08:35 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_double_fd(double dis);
void	ft_print_benchmark_moves(t_bench *bench);

/*This will make the text pretty to be printed.*/
void	ft_polish_strategy(t_bench *bench, char *adap_strategy)
{
	if (ft_strcmp(bench->strategy, STRA_SIMPLE) == 0)
		bench->strategy = "Simple / O(n^2)";
	else if (ft_strcmp(bench->strategy, STRA_MEDIUM) == 0)
		bench->strategy = "Medium / O(n√n)";
	else if (ft_strcmp(bench->strategy, STRA_COMPLEX) == 0)
		bench->strategy = "Complex / O(n log n)";
	else
	{
		if (bench->len <= 5)
			bench->strategy = "Adaptive / O(n^2)";
		else if (ft_strcmp(adap_strategy, STRA_SIMPLE) == 0)
			bench->strategy = "Adaptive / O(n^2)";
		else if (ft_strcmp(adap_strategy, STRA_MEDIUM) == 0)
			bench->strategy = "Adaptive / O(n√n)";
		else
			bench->strategy = "Adaptive / O(n log n)";
	}
}

void	ft_bench_initiate(t_bench *bench)
{
	if (!bench)
		return ;
	bench->on_off = 0;
	bench->strategy = STRA_ADAPTIVE;
	bench->len = 0;
	bench->dis = 0;
	bench->total_moves = 0;
	bench->pa = 0;
	bench->pb = 0;
	bench->rra = 0;
	bench->rrb = 0;
	bench->rrr = 0;
	bench->ra = 0;
	bench->rb = 0;
	bench->rr = 0;
	bench->sa = 0;
	bench->sb = 0;
	bench->ss = 0;
}

void	ft_print_benchmark(t_bench *bench)
{
	ft_putstr_fd("\n[bench] disorder: ", 2);
	ft_print_double_fd(bench->dis);
	ft_putstr_fd("\n[bench] strategy: ", 2);
	ft_putstr_fd(bench->strategy, 2);
	ft_putstr_fd("\n[bench] total_ops: ", 2);
	ft_putnbr_fd(bench->total_moves, 2);
	ft_print_benchmark_moves(bench);
}

void	ft_print_benchmark_moves(t_bench *bench)
{
	ft_putstr_fd("\n[bench] sa: ", 2);
	ft_putnbr_fd(bench->sa, 2);
	ft_putstr_fd("\tsb: ", 2);
	ft_putnbr_fd(bench->sb, 2);
	ft_putstr_fd("\tss: ", 2);
	ft_putnbr_fd(bench->ss, 2);
	ft_putstr_fd("\tpa: ", 2);
	ft_putnbr_fd(bench->pa, 2);
	ft_putstr_fd("\tpb: ", 2);
	ft_putnbr_fd(bench->pb, 2);
	ft_putstr_fd("\n[bench] ra: ", 2);
	ft_putnbr_fd(bench->ra, 2);
	ft_putstr_fd("\trb: ", 2);
	ft_putnbr_fd(bench->rb, 2);
	ft_putstr_fd("\trr: ", 2);
	ft_putnbr_fd(bench->rr, 2);
	ft_putstr_fd("\trra: ", 2);
	ft_putnbr_fd(bench->rra, 2);
	ft_putstr_fd("\trrb: ", 2);
	ft_putnbr_fd(bench->rrb, 2);
	ft_putstr_fd("\trrr: ", 2);
	ft_putnbr_fd(bench->rrr, 2);
	ft_putstr_fd("\n", 2);
}

void	ft_print_double_fd(double dis)
{
	int	inteiro;

	inteiro = dis;
	dis -= inteiro;
	dis *= 100;
	ft_putnbr_fd(inteiro, 2);
	ft_putstr_fd(".", 2);
	if (dis < 10)
		ft_putnbr_fd(0, 2);
	ft_putnbr_fd(dis, 2);
	ft_putstr_fd("%", 2);
}
