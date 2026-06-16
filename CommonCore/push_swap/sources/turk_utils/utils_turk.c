/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_turk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:56:58 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/12 20:20:36 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_math_cost(t_stack **stack_a, t_stack **stack_b,
				t_stack *current);

/*Will compare each node to the whole stack and set it's rank.*/
int	ft_set_rank(t_stack *stack_a)
{
	int		index;
	t_stack	*current;
	t_stack	*checker;

	if (!stack_a)
		return (0);
	current = stack_a;
	while (current)
	{
		index = 1;
		checker = stack_a;
		while (checker)
		{
			if (current->content > checker->content)
				index++;
			checker = checker->next;
		}
		current->rank = index;
		current = current->next;
	}
	return (1);
}

int	ft_find_positions(t_stack **stack_a)
{
	int		index;
	t_stack	*current;

	if (!stack_a || !*stack_a)
		return (0);
	index = 0;
	current = *stack_a;
	while (current != NULL)
	{
		current->position = index;
		index++;
		current = current->next;
	}
	return (1);
}

/*Will add the move cost to each node.*/
int	ft_calculate_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;

	if (!stack_a || !*stack_a || !stack_b || !*stack_b)
		return (0);
	current = *stack_a;
	while (current)
	{
		ft_math_cost(stack_a, stack_b, current);
		current = current->next;
	}
	return (1);
}

/*To be called by 'ft_calculate_cost.*/
static void	ft_math_cost(t_stack **stack_a, t_stack **stack_b, t_stack *current)
{
	size_t	len_a;
	size_t	len_b;

	len_a = ft_stack_size_print(*stack_a, 0);
	len_b = ft_stack_size_print(*stack_b, 0);
	if (current->position <= ((int)len_a / 2))
		current->cost_a = current->position;
	else
		current->cost_a = -(len_a - current->position);
	if (current->target_node->position <= ((int)len_b / 2))
		current->cost_b = current->target_node->position;
	else
		current->cost_b = -(len_b - current->target_node->position);
	if (current->cost_a * current->cost_b < 0)
		current->total_cost = ft_abs(current->cost_a)
			+ ft_abs(current->cost_b);
	else
	{
		if (ft_abs(current->cost_a) > ft_abs(current->cost_b))
			current->total_cost = ft_abs(current->cost_a);
		else
			current->total_cost = ft_abs(current->cost_b);
	}
}

/*Will return the node with the 'cheapest' moves.*/
t_stack	*ft_find_cheapest_node(t_stack *stack_a)
{
	t_stack	*cheapest;

	if (!stack_a)
		return (NULL);
	cheapest = stack_a;
	while (stack_a)
	{
		if (stack_a->total_cost < cheapest->total_cost)
			cheapest = stack_a;
		stack_a = stack_a->next;
	}
	return (cheapest);
}
