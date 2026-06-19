/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:13:20 by andrcard          #+#    #+#             */
/*   Updated: 2026/06/09 19:13:20 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/*Take the first element at the top of 'b' and put it at the top of 'a'.*/
int	pa(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	t_stack	*temp;

	if (!stack_b || !*stack_b)
		return (0);
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_stack_addfront(stack_a, temp);
	ft_putstr_fd("pa\n", 1);
	if (bench)
	{
		bench->pa++;
		bench->total_moves++;
	}
	return (1);
}
// Take the first element at the top of 'a' and put it at the top of 'b'.*/

int	pb(t_stack **stack_b, t_stack **stack_a, t_bench *bench)
{
	t_stack	*temp;

	if (!stack_a || !*stack_a)
		return (0);
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_stack_addfront(stack_b, temp);
	ft_putstr_fd("pb\n", 1);
	if (bench)
	{
		bench->pb++;
		bench->total_moves++;
	}
	return (1);
}
