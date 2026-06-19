/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:40:24 by andrcard          #+#    #+#             */
/*   Updated: 2026/05/21 14:00:14 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_number(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		if (args[i][0] == '-' || args[i][0] == '+')
			j = 1;
		else
			j = 0;
		if ((args[i][0] == '-' || args[i][0] == '+')
			&& (!ft_isdigit(args[i][1]) || args[i][1] == 0))
			return (0);
		while (args[i][j])
		{
			if (ft_isdigit(args[i][j]))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_atoi_overflow(char *str, int *final_result)
{
	long long	num;
	int			signal;
	long long	result;

	num = 0;
	signal = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*(str++) - '0');
	result = num * signal;
	if (result < INT_MIN || result > INT_MAX)
		return (0);
	*(final_result) = (int)result;
	return (1);
}

/*Will return (0) if there's a duplicate, (1) if NONE.*/
int	ft_no_dup(t_stack *stack)
{
	t_stack	*runner;

	if (!stack)
		return (0);
	while (stack)
	{
		runner = stack->next;
		while (runner)
		{
			if (stack->content == runner->content)
				return (0);
			runner = runner->next;
		}
		stack = stack->next;
	}
	return (1);
}

void	ft_stack_addback(t_stack **stack, t_stack *node)
{
	t_stack	*last;

	if (!stack || !node)
		return ;
	if (!*stack)
		*stack = node;
	else
	{
		last = ft_stack_last(*stack);
		if (!last)
			return ;
		last->next = node;
	}
}
