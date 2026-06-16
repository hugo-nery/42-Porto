/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:48:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/16 12:01:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

/* utils */
int ft_find_smaller(t_list *stack);

/* */
int	sa(t_list **stack_a);
int sb(t_list **stack_b);

int pa(t_list **stack_a, t_list **stack_b);
int pb(t_list **stack_b, t_list **stack_a);

int ra(t_list **stack_a);
int rb(t_list **stack_b);

int rr(t_list **stack_a, t_list **stack_b);

#endif