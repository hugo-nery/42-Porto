/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:54:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/13 19:38:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

#include <stdio.h>

int main (int argc, char **argv)
{
	ft_printf("Hi\n");
	
	t_list *stack_a;

	if (argc > 2)
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

		ft_lstiter(stack_a, (void *)ft_putstr);
	
	}
	
	return (0);
}