/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:59:15 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/08 18:59:15 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int			ft_radixsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
static int	ft_select_sorting(t_stack **stack_a, t_stack **stack_b,
				t_bench *bench);

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_bench	bench;

	if (argc < 2)
		return (1);
	ft_bench_initiate(&bench);
	ft_strategy_selector(&argc, &argv, &bench);
	stack_b = NULL;
	stack_a = main_parsing(argv, &bench);
	if (!stack_a || !ft_no_dup(stack_a))
		return (ft_stack_delall(stack_a), ft_putstr_fd("Error\n", 2), 0);
	if (ft_is_ordered(stack_a))
		ft_polish_strategy(&bench, bench.strategy);
	else
		ft_select_sorting(&stack_a, &stack_b, &bench);
	if (bench.on_off == 1)
		ft_print_benchmark(&bench);
	ft_putstr_fd("\n", 2);
	ft_stack_size_print(stack_a, 1);
	ft_stack_size_print(stack_b, 1);
	ft_stack_delall(stack_a);
	ft_stack_delall(stack_b);
	return (0);
}

t_stack	*main_parsing(char **argv, t_bench *bench)
{
	t_stack	*node_head;
	char	**temp;
	int		nb;
	int		i;

	node_head = NULL;
	while (*(++argv))
	{
		temp = ft_split(*argv, ' ');
		if (is_valid_number(temp) == 0 || *temp == (void *) '\0')
			return (NULL);
		i = 0;
		while (temp[i])
		{
			if (ft_atoi_overflow(temp[i++], &nb) == 0)
				return (bench->len = 0, NULL);
			bench->len++;
			if (node_head == NULL)
				node_head = ft_node_new(nb);
			else
				ft_stack_addback(&node_head, ft_node_new(nb));
		}
		ft_free(i, temp);
	}
	return (node_head);
}

static int	ft_select_sorting(t_stack **stack_a, t_stack **stack_b,
				t_bench *bench)
{
	if (!stack_a || !*stack_a || !bench)
		return (0);
	bench->dis = ft_compute_disorder(*stack_a);
	if (bench->len <= 5)
		return (ft_smallsort(stack_a, stack_b, bench));
	if (ft_strcmp(bench->strategy, STRA_SIMPLE) == 0)
		return (ft_radixsort(stack_a, stack_b, bench));
	if (ft_strcmp(bench->strategy, STRA_MEDIUM) == 0)
		return (ft_bucketsort(stack_a, stack_b, bench));
	if (ft_strcmp(bench->strategy, STRA_COMPLEX) == 0)
		return (ft_turksort(stack_a, stack_b, bench));
	if (ft_strcmp(bench->strategy, STRA_ADAPTIVE) == 0)
	{
		if (bench->dis <= 20.00)
			return (ft_bucketsort(stack_a, stack_b, bench));
		if (bench->dis >= 50.00)
			return (ft_turksort(stack_a, stack_b, bench));
		else
			return (ft_radixsort(stack_a, stack_b, bench));
	}
	return (1);
}
