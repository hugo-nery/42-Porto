/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:03:53 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/08 19:03:53 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*Swap the first two elements at the top of stack a.*/
int	sa(t_stack **stack_a, t_bench *bench)
{
	t_stack	*second;

	if (!*stack_a || (*stack_a)->next == NULL)
		return (0);
	second = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	second->next = *stack_a;
	*stack_a = second;
	ft_putstr_fd("sa\n", 1);
	if (bench)
	{
		bench->sa++;
		bench->total_moves++;
	}
	return (1);
}
/*Swap the first two elements at the top of stack b*/

int	sb(t_stack **stack_b, t_bench *bench)
{
	t_stack	*second;

	if (!*stack_b || (*stack_b)->next == NULL)
		return (0);
	second = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	second->next = *stack_b;
	*stack_b = second;
	ft_putstr_fd("sb\n", 1);
	if (bench)
	{
		bench->sb++;
		bench->total_moves++;
	}
	return (1);
}
/*sa and sb at the same time.*/

int	ss(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	t_stack	*second;

	if ((!*stack_a || !(*stack_a)->next) || (!*stack_b || !(*stack_b)->next))
		return (0);
	second = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	second->next = *stack_a;
	*stack_a = second;
	second = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	second->next = *stack_b;
	*stack_b = second;
	ft_putstr_fd("ss\n", 1);
	if (bench)
	{
		bench->ss++;
		bench->total_moves++;
	}
	return (1);
}
