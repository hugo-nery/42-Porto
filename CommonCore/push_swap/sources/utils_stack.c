/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:15:05 by andrcard          #+#    #+#             */
/*   Updated: 2026/05/20 18:35:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_node_new(int number)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->content = number;
	new_node->next = NULL;
	return (new_node);
}

void	ft_stack_addfront(t_stack **stack, t_stack *node)
{
	if (!stack || !node)
		return ;
	node->next = *stack;
	*stack = node;
}

/* Will return the last node of the list.*/
t_stack	*ft_stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

/*Have to free everything once the data is sorted.*/
int	ft_stack_delall(t_stack *stack)
{
	t_stack	*temp;

	temp = NULL;
	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	return (1);
}

/*Will always return the size of the stack. 
**To print each number pass 1, otherwise 0 in the second argument*/
size_t	ft_stack_size_print(t_stack *stack, int true_false)
{
	size_t	count;

	count = 0;
	while (stack)
	{
		if (true_false)
		{
			ft_putnbr_fd(stack->content, 2);
			ft_putstr_fd(" ", 2);
		}
		stack = stack->next;
		count++;
	}
	if (true_false)
		ft_putstr_fd("\n", 2);
	return (count);
}
