/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radixsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:22:12 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/11 17:22:12 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_count_maxbits(t_stack *stack);
void	radix_to_b(t_stack **stack_a, t_stack **stack_b,
			t_bench *bench, size_t bit_pos);
void	radix_to_a(t_stack **stack_a, t_stack **stack_b,
			t_bench *bench, size_t bit_pos);

int	ft_radixsort(t_stack **stack_a, t_stack **stack_b, t_bench *bench)
{
	size_t	max_bits;
	size_t	bit_pos;

	if (!stack_a || !*stack_a || !bench)
		return (0);
	ft_set_rank(*stack_a);
	max_bits = ft_count_maxbits(*stack_a);
	bit_pos = 0;
	while (bit_pos < max_bits)
	{
		radix_to_b(stack_a, stack_b, bench, bit_pos);
		bit_pos++;
		radix_to_a(stack_a, stack_b, bench, bit_pos);
	}
	while (*stack_b)
		pa(stack_a, stack_b, bench);
	ft_min_to_top(stack_a, bench);
	ft_polish_strategy(bench, STRA_SIMPLE);
	return (1);
}

void	radix_to_b(t_stack **stack_a, t_stack **stack_b, t_bench *bench,
			size_t bit_pos)
{
	size_t	current_len;

	current_len = ft_stack_size_print(*stack_a, 0);
	while (current_len--)
	{
		if ((((*stack_a)->rank >> bit_pos) & 1) == 0)
			pb(stack_b, stack_a, bench);
		else
			ra(stack_a, bench);
	}
}

void	radix_to_a(t_stack **stack_a, t_stack **stack_b, t_bench *bench,
			size_t bit_pos)
{
	size_t	current_len;

	current_len = ft_stack_size_print(*stack_b, 0);
	while (current_len--)
	{
		if ((((*stack_b)->rank >> bit_pos) & 1) == 1)
			pa(stack_a, stack_b, bench);
		else
			rb(stack_b, bench);
	}
}

/*Will return the count of bits based on the highest rank of the stack.*/
size_t	ft_count_maxbits(t_stack *stack)
{
	size_t	len;
	size_t	bit_count;

	bit_count = 0;
	len = ft_stack_size_print(stack, 0) - 1;
	while (len > 0)
	{
		len = len >> 1;
		bit_count++;
	}
	return (bit_count);
}
