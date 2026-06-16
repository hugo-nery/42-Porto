/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_disorder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:59:55 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/18 10:42:50 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	ft_compute_disorder(t_stack *stack_a)
{
	t_stack	*copy;
	size_t	mistakes;
	size_t	total_pairs;

	mistakes = 0;
	total_pairs = 0;
	if (!stack_a || !stack_a->next)
		return (0.0);
	while (stack_a)
	{
		copy = stack_a->next;
		while (copy)
		{
			total_pairs++;
			if (stack_a->content > copy->content)
				mistakes++;
			copy = copy->next;
		}
		stack_a = stack_a->next;
	}
	return (((double)mistakes / total_pairs) * 100);
}

int	ft_is_ordered(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next != NULL)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
