/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:08:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/05 15:01:01 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_putnbr(int nb);

int main () {

    ft_putnbr(-2147483646);

    return 0;
}

void ft_putnbr(int nb)
{
    char c;
    if (nb == -2147483648)
        write(1,"-2147483648",11);
    else if (nb < 0)
    {
        write(1, "-", 1);
        nb = nb * -1;
    }
    else if (nb < 10)
    {
        c = nb + '0';
        write (1, &c, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}