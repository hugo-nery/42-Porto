/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turksort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:56:49 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/16 15:11:41 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_node_moves(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
static int	ft_target_to_top(t_stack **stack_a, t_stack *target,
				t_bench *bench);
static void	ft_execute_single_moves(t_stack **stack_a, t_stack **stack_b,
				t_bench *bench, t_stack *cheapest);

int	ft_turksort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	if (!stack_a || !*stack_a || !bench)
		return (0);
	ft_set_rank(*stack_a);
	pb(stack_b, stack_a, bench);
	pb(stack_b, stack_a, bench);
	while (ft_stack_size_print(*stack_a, 0) > 3)
	{
		ft_find_positions(stack_a);
		ft_find_positions(stack_b);
		ft_add_targets(stack_a, stack_b);
		ft_node_moves(stack_a, stack_b, bench);
	}
	ft_tinysort(stack_a, bench);
	while (*stack_b != NULL)
	{
		ft_find_positions(stack_a);
		ft_find_positions(stack_b);
		ft_get_target_node_a(stack_a, stack_b);
		ft_target_to_top(stack_a, (*stack_b)->target_node, bench);
		pa(stack_a, stack_b, bench);
	}
	ft_min_to_top(stack_a, bench);
	ft_polish_strategy(bench, STRA_COMPLEX);
	return (1);
}

static int	ft_target_to_top(t_stack **stack_a, t_stack *target, t_bench *bench)
{
	int	len_a;

	len_a = ft_stack_size_print(*stack_a, 0);
	if (target->position <= (len_a / 2))
	{
		while ((*stack_a) != target)
			ra(stack_a, bench);
	}
	else
	{
		while ((*stack_a) != target)
			rra(stack_a, bench);
	}
	return (1);
}

/*Will execute all the moves until the cost of the cheapes node becomes 1.*/
static	int	ft_node_moves(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	t_stack	*cheapest;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b || !bench)
		return (0);
	cheapest = ft_find_cheapest_node(*stack_a);
	while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
	{
		rr(stack_a, stack_b, bench);
		cheapest->cost_a--;
		cheapest->cost_b--;
	}
	while (cheapest->cost_a < 0 && cheapest->cost_b < 0)
	{
		rrr(stack_a, stack_b, bench);
		cheapest->cost_a++;
		cheapest->cost_b++;
	}
	ft_execute_single_moves(stack_a, stack_b, bench, cheapest);
	pb(stack_b, stack_a, bench);
	return (1);
}

/*Will be called to execute the single stack moves by 'ft_node_moves'.*/
static void	ft_execute_single_moves(t_stack **stack_a, t_stack **stack_b,
				t_bench *bench, t_stack *cheapest)
{
	while (cheapest->cost_a > 0)
	{
		ra(stack_a, bench);
		cheapest->cost_a--;
	}
	while (cheapest->cost_a < 0)
	{
		rra(stack_a, bench);
		cheapest->cost_a++;
	}
	while (cheapest->cost_b > 0)
	{
		rb(stack_b, bench);
		cheapest->cost_b--;
	}
	while (cheapest->cost_b < 0)
	{
		rrb(stack_b, bench);
		cheapest->cost_b++;
	}
}
