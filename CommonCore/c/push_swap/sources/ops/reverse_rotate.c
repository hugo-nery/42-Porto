/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:13:24 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/09 19:13:24 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*Shift down all elements of stack a by one. Last element becomes the first.*/
int	rra(t_stack **stack_a, t_bench *bench)
{
	t_stack	*second_last;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	second_last = *stack_a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	ft_stack_addfront(stack_a, second_last->next);
	second_last->next = NULL;
	ft_putstr_fd("rra\n", 1);
	if (bench)
	{
		bench->rra++;
		bench->total_moves++;
	}
	return (1);
}
/*Shift down all elements of stack b by one. Last element becomes the first.*/

int	rrb(t_stack **stack_b, t_bench *bench)
{
	t_stack	*second_last;

	if (!*stack_b || (*stack_b)->next == NULL)
		return (0);
	second_last = *stack_b;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	ft_stack_addfront(stack_b, second_last->next);
	second_last->next = NULL;
	ft_putstr_fd("rrb\n", 1);
	if (bench)
	{
		bench->rrb++;
		bench->total_moves++;
	}
	return (1);
}
/*rra and rrb at the same time.*/

int	rrr(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	t_stack	*second_last;
	t_stack	*last;

	if ((!*stack_a || !(*stack_a)->next) || (!*stack_b || !(*stack_b)->next))
		return (0);
	second_last = *stack_a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	ft_stack_addfront(stack_a, last);
	second_last = *stack_b;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	ft_stack_addfront(stack_b, last);
	ft_putstr_fd("rrr\n", 1);
	if (bench)
	{
		bench->rrr++;
		bench->total_moves++;
	}
	return (1);
}
