/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:54:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/13 23:29:58 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void ft_putcontent(void *ptr)
{
	ft_putstr((unsigned char *)ptr);
	ft_putstr("\n");
}

int ft_compare_n_content(t_list **stack_a, t_list **stack_b)
{
	int a;
	int b;
	
	a = ft_atoi((*stack_a)->content);
	b = ft_atoi((*stack_a)->next->content);
	
	if (a > b)
	{
		sa(stack_a);
		ft_printf("troquei\n");
		
		pb(stack_a, stack_b);
		ft_printf("copiei de A pra B\n");

	}
	return (0);
}

int main (int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	if (argc >= 2)
	{
		t_list *node;
		char *nb;
		
		argv++;
		while (*argv)
		{
			nb = ft_strdup(*argv);
			node = ft_lstnew((void *)nb);
			ft_lstadd_back(&stack_a, node);
			argv++;
		}
		
		ft_printf("\n\npassed:\n");
		ft_lstiter(stack_a, ft_putcontent);
		
		ft_compare_n_content(&stack_a, &stack_b);
		ft_printf("\n\ndepois:\n");

		ft_lstiter(stack_a, ft_putcontent);

		ft_printf("\n\nstack_b:\n");
		ft_lstiter(stack_b, ft_putcontent);

	
	}
	
	return (0);
}