/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:04:23 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 20:11:02 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main ()
{
    int a = 5;
    int b = 10;

    printf ("a_%d / b_%d\n", a, b);

    ft_swap(&a, &b);

    printf ("a_%d / b_%d\n", a, b);

    return 0;
}

void	ft_swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}