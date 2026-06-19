/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bucketsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:48:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/08 22:48:29 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_pos(t_stack *stack, size_t pos);
void	ft_bucket_to_a(t_stack **stack_a, t_stack **stack_b, t_bench *bench);
void	ft_bucket_to_b(t_stack **stack_a, t_stack **stack_b, t_bench *bench);

//Bucket Sort adaptation with window_gap
int	ft_bucketsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	if (!stack_a || !*stack_a || !bench)
		return (0);
	ft_set_rank(*stack_a);
	ft_bucket_to_b(stack_a, stack_b, bench);
	ft_bucket_to_a(stack_a, stack_b, bench);
	ft_min_to_top(stack_a, bench);
	ft_polish_strategy(bench, STRA_MEDIUM);
	return (1);
}

void	ft_bucket_to_b(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	size_t	w_min;
	size_t	w_max;
	size_t	len;

	w_min = 1;
	w_max = 4;
	len = ft_stack_size_print(*stack_a, 0);
	if (len >= 10)
		w_max = ft_sqrt_prox(len) * 1.3;
	while (*stack_a)
	{
		if ((*stack_a)->rank <= (int)w_max)
		{
			pb(stack_b, stack_a, bench);
			if ((*stack_b)->rank < (int)w_min)
				rb(stack_b, bench);
			w_min++;
			w_max++;
		}
		else if (ft_stack_last(*stack_a)->rank <= (int)w_max)
			rra(stack_a, bench);
		else
			ra(stack_a, bench);
	}
}

void	ft_bucket_to_a(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	size_t	len;
	size_t	pos;

	len = ft_stack_size_print(*stack_b, 0);
	while (*stack_b)
	{
		pos = ft_find_pos(*stack_b, len);
		if (pos <= len / 2)
		{
			while (pos--)
				rb(stack_b, bench);
		}
		else
		{
			pos = len - pos;
			while (pos--)
				rrb(stack_b, bench);
		}
		pa(stack_a, stack_b, bench);
		len--;
	}
	ft_min_to_top(stack_a, bench);
	ft_polish_strategy(bench, STRA_MEDIUM);
}

int	ft_find_pos(t_stack *stack, size_t pos)
{
	size_t	idx;

	idx = 0;
	while (stack)
	{
		if (stack->rank == (int)pos)
			break ;
		idx++;
		stack = stack->next;
	}
	return (idx);
}
