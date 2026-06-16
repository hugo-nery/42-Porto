/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:54:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/16 12:03:31 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void ft_putcontent(void *ptr)
{
	ft_putstr((unsigned char *)ptr);
	ft_putstr("\n");
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

		ft_printf("\nstack_a:\n");
		ft_lstiter(stack_a, ft_putcontent);

		ft_printf("\nmin = %d\n", ft_find_smaller(stack_a));

		ra(&stack_a);
		ft_printf("\nra - stack_a:\n");
		ft_lstiter(stack_a, ft_putcontent);
		
		/*
		ft_compare_n_content(&stack_a, &stack_b);
		ft_printf("\n\ndepois:\n");

		ft_lstiter(stack_a, ft_putcontent);

		ft_printf("\n\nstack_b:\n");
		ft_lstiter(stack_b, ft_putcontent);

		*/

	
	}
	
	return (0);
}