/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:13:26 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/09 19:13:26 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*Shift up all elements of stack a by one. First element becomes the last.*/
int	ra(t_stack **stack_a, t_bench *bench)
{
	t_stack	*first;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	first = *stack_a;
	*stack_a = first->next;
	first->next = NULL;
	ft_stack_addback(stack_a, first);
	ft_putstr_fd("ra\n", 1);
	if (bench)
	{
		bench->ra++;
		bench->total_moves++;
	}
	return (1);
}

/*Shift up all elements of stack b by one. First element becomes the last.*/
int	rb(t_stack **stack_b, t_bench *bench)
{
	t_stack	*first;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	first = *stack_b;
	*stack_b = first->next;
	first->next = NULL;
	ft_stack_addback(stack_b, first);
	ft_putstr_fd("rb\n", 1);
	if (bench)
	{
		bench->rb++;
		bench->total_moves++;
	}
	return (1);
}

/*ra and rb at the same time.*/
int	rr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	t_stack	*first_a;
	t_stack	*first_b;

	if ((!*stack_a || !(*stack_a)->next) || (!*stack_b || !(*stack_b)->next))
		return (0);
	first_a = *stack_a;
	*stack_a = first_a->next;
	first_a->next = NULL;
	first_b = *stack_b;
	*stack_b = first_b->next;
	first_b->next = NULL;
	ft_stack_addback(stack_a, first_a);
	ft_stack_addback(stack_b, first_b);
	ft_putstr_fd("rr\n", 1);
	if (bench)
	{
		bench->rr++;
		bench->total_moves++;
	}
	return (1);
}
