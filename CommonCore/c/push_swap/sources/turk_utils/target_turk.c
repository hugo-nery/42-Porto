/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_turk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 16:24:40 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/12 19:28:05 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_update_target_ab(t_stack **stack_a, t_stack **stack_b,
				t_stack *min_rank_node);

int	ft_add_targets(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current_a;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return (0);
	current_a = *stack_a;
	while (current_a != NULL)
	{
		current_a->target_node = ft_get_target_node_b(stack_b, current_a->rank);
		current_a = current_a->next;
	}
	ft_calculate_cost(stack_a, stack_b);
	return (1);
}

int	ft_get_target_node_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current_a;
	t_stack	*min_rank_node;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return (0);
	min_rank_node = *stack_a;
	current_a = *stack_a;
	while (current_a)
	{
		if (current_a->rank < min_rank_node->rank)
			min_rank_node = current_a;
		current_a = current_a->next;
	}
	ft_update_target_ab(stack_a, stack_b, min_rank_node);
	return (1);
}

static void	ft_update_target_ab(t_stack **stack_a, t_stack **stack_b,
				t_stack *min_rank_node)
{
	t_stack	*current_a;
	t_stack	*current_b;
	long	max_rank;

	current_a = *stack_a;
	current_b = *stack_b;
	while (current_b)
	{
		max_rank = LONG_MAX;
		current_a = *stack_a;
		while (current_a)
		{
			if (current_a->rank > current_b->rank && current_a->rank < max_rank)
			{
				current_b->target_node = current_a;
				max_rank = current_a->rank;
			}
			current_a = current_a->next;
		}
		if (max_rank == LONG_MAX)
			current_b->target_node = min_rank_node;
		current_b = current_b->next;
	}
}

t_stack	*ft_get_target_node_b(t_stack **stack_b, int rank_a)
{
	t_stack	*current_b;
	t_stack	*target_node;

	current_b = *stack_b;
	target_node = NULL;
	while (current_b != NULL)
	{
		if (current_b->rank < rank_a
			&& (target_node == NULL || current_b->rank > target_node->rank))
			target_node = current_b;
		current_b = current_b->next;
	}
	if (target_node == NULL)
	{
		current_b = *stack_b;
		target_node = current_b;
		current_b = current_b->next;
		while (current_b != NULL)
		{
			if (current_b->rank > target_node->rank)
				target_node = current_b;
			current_b = current_b->next;
		}
	}
	return (target_node);
}
