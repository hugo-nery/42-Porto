/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:49:16 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/16 12:00:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_list **stack_a)
{
	char *temp;
	
	// 	Do nothing if there is only one or no elements.
	if (!*stack_a || (*stack_a)->next == NULL)
		return (0);
	
	// sa (swap a): Swap the first two elements at the top of stack a.
	temp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = temp;
	return (1);
}

int sb(t_list **stack_b)
{
	char *temp;
	
	// 	Do nothing if there is only one or no elements.
	if (!*stack_b || (*stack_b)->next == NULL)
		return (0);
	
	// sb (swap b): Swap the first two elements at the top of stack b.
	temp = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = temp;
	return (1);
}

int pa(t_list **stack_a, t_list **stack_b)
{
	t_list *temp_next;

	// 	Do nothing if a is empty.
	if (!*stack_b)
		return (0);

	// // pa (push a): Take the first element at the top of b and put it at the top of a.
	// pb (push b): Take the first element at the top of a and put it at the top of b.
	temp_next = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b = temp_next;
	return (1);
}

int pb(t_list **stack_b, t_list **stack_a)
{
	t_list *temp_next;

	// 	Do nothing if a is empty.
	if (!*stack_a)
		return (0);

	// pb (push b): Take the first element at the top of a and put it at the top of b.
	temp_next = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = temp_next;
	return (1);
}

int ss(t_list **stack_a, t_list **stack_b)
{
	// ss : sa and sb at the same time.
	if (sa(stack_a) && sb(stack_b))
		return (1);
	return (0);
}

int ra(t_list **stack_a)
{
	//ra (rotate a): Shift up all elements of stack a by one.
	t_list *first;
	
	if (!*stack_a)
		return (-99);
	
	first = *stack_a;
	*stack_a = first->next;
	first->next = NULL;
	//The first element becomes the last one.
	ft_lstadd_back(stack_a, first);
	return (1);
}

int rb(t_list **stack_b)
{
// rb (rotate b): Shift up all elements of stack b by one.
	t_list *first;
	
	if (!*stack_b)
		return (-99);
	
	first = *stack_b;
	*stack_b = first->next;
	first->next = NULL;
	//The first element becomes the last one.
	ft_lstadd_back(stack_b, first);
	return (1);
}


int rr(t_list **stack_a, t_list **stack_b)
{
	// rr : ra and rb at the same time.
	if (ra(stack_a) && rb(stack_b))
		return (1);
	return (0);
}
/*
void rra(t_item *stack_a)
{
// rra (reverse rotate a): Shift down all elements of stack a by one.
// 	The last element becomes the first one.
}

void rrb(t_item *stack_b)
{
// rrb (reverse rotate b): Shift down all elements of stack b by one.
// 	The last element becomes the first one.
}
void rrr(t_item *stack_a, t_item *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
// rrr : rra and rrb at the same time.
} 
*/