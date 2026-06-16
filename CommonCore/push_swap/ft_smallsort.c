/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:13:32 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/12 14:56:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_pos_smallest(t_stack *stack);
t_stack			*ft_find_smallest(t_stack *stack);
int				ft_tinysort(t_stack **stack_a, t_bench *bench);
void			ft_min_to_top(t_stack **stack_a, t_bench *bench);

/*Orders list of up to 5 numbers.*/
int	ft_smallsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	ssize_t	over_tiny;

	if (!stack_a || !*stack_a || !bench)
		return (0);
	over_tiny = ft_stack_size_print(*stack_a, 0) - 3;
	while (over_tiny > 0)
	{
		ft_min_to_top(stack_a, bench);
		if (ft_is_ordered(*stack_a))
			break ;
		pb(stack_b, stack_a, bench);
		over_tiny--;
	}
	ft_tinysort(stack_a, bench);
	while (*stack_b)
		pa(stack_a, stack_b, bench);
	ft_polish_strategy(bench, STRA_ADAPTIVE);
	return (1);
}

/*Orders list of up to 3 numbers.*/
int	ft_tinysort(t_stack **stack_a, t_bench *bench)
{
	int	a;
	int	b;
	int	c;

	if (!*stack_a || (*stack_a)->next == NULL)
		return (0);
	if ((int)bench->len == 2)
		return (sa(stack_a, bench));
	while (!ft_is_ordered(*stack_a))
	{
		a = (*stack_a)->content;
		b = (*stack_a)->next->content;
		c = (*stack_a)->next->next->content;
		if (a > b && a > c)
			ra(stack_a, bench);
		else if ((a > b && a < c) || (a < b && a < c))
			sa(stack_a, bench);
		else
			rra(stack_a, bench);
	}
	return (1);
}

/*Will move the smallest number to the top.*/
void	ft_min_to_top(t_stack **stack_a, t_bench *bench)
{
	t_stack	*node_min;
	int		pos;

	node_min = ft_find_smallest(*stack_a);
	pos = ft_pos_smallest(*stack_a);
	if (pos - 1 <= (int)bench->len / 2)
	{
		while (*stack_a != node_min)
			ra(stack_a, bench);
	}
	else
	{
		while (*stack_a != node_min)
			rra(stack_a, bench);
	}
}

/*Will return the node with the smallest content.*/
t_stack	*ft_find_smallest(t_stack *stack)
{
	t_stack	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack)
	{
		if (min->content > stack->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

/*will return 0 if no stack, or for the indice of the smallest number.*/
static size_t	ft_pos_smallest(t_stack *stack)
{
	int		min;
	size_t	pos;

	if (!stack)
		return (0);
	pos = 1;
	min = ft_find_smallest(stack)->content;
	while (stack)
	{
		if (stack->content == min)
			break ;
		pos++;
		stack = stack->next;
	}
	return (pos);
}
