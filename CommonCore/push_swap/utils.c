/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:20:11 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/15 19:20:11 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_compare_n_content(t_list **stack_a, t_list **stack_b)
{
	int a;
	int b;

	while ((*stack_a)->next != NULL)
	{
		a = ft_atoi((*stack_a)->content);
		b = ft_atoi((*stack_a)->next->content);
	
		if (a > b)
		{
			sa(stack_a);
			pb(stack_a, stack_b);
		}
		else
			pb(stack_a, stack_b);

		*stack_a = (*stack_a)->next;
	}

	return (0);
}

int ft_find_smaller(t_list *stack)
{
	long min;
	long current;

	if (!stack)
		return (0);

	min = ft_atoi(stack->content);
	while (stack->next != NULL)
	{
		current = ft_atoi(stack->content);

		if (min > current)
			min = current;

		stack = stack->next;
	}
	return ((int)min);
}
