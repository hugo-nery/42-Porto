/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:08:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/04 20:14:02 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_putnbr(int nb);

int main () {

    ft_putnbr(2);

    return 0;
}

void ft_putnbr(int nb)
{
    if (nb > 10)
    {
        write (1, &nb, 1);
        // ft_putnbr(nb / 10);
    }
    // else
    // {
    //     write (1, &nb, 1);
    // }
}