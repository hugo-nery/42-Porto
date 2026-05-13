/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:49:16 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/13 23:30:25 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	sa(t_list **stack_a)
{
	// sa (swap a): Swap the first two elements at the top of stack a.
	// 	Do nothing if there is only one or no elements.
	char *temp;
	
	if ((*stack_a)->next == NULL)
		return (0);
	
	temp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = temp;
	return (1);
}

int pb(t_list **stack_a, t_list **stack_b)
{
// pb (push b): Take the first element at the top of a and put it at the top of b.
// 	Do nothing if a is empty.
	t_list *new;
	char *ctt;
	
	if (!*stack_a)
		return (0);

	ctt = ft_strdup((*stack_a)->content);
	new = ft_lstnew((void *)ctt);
	ft_lstadd_front(stack_b, new);
	return (1);

}


// void pa(t_list *stack_a)
// {
// // pa (push a): Take the first element at the top of b and put it at the top of a.
// // 	Do nothing if b is empty.

// }
/*
void sb(t_item *stack_b)
{
	// sb (swap b): Swap the first two elements at the top of stack b.
// 	Do nothing if there is only one or no elements.
}

void ss(t_item *stack_a, t_item *stack_b)
{
	// ss : sa and sb at the same time.
	sa(stack_a);
	sb(stack_b);
}



void ra(t_item *stack_a)
{
// ra (rotate a): Shift up all elements of stack a by one.
// 	The first element becomes the last one.
}
void rb(t_item *stack_b)
{
// rb (rotate b): Shift up all elements of stack b by one.
// 	The first element becomes the last one.
}
void rr(t_item *stack_a, t_item *stack_b)
{
	ra(stack_a);
	rb(stack_b);
// rr : ra and rb at the same time.
}
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