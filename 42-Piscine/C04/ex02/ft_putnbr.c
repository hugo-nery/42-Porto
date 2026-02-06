/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:08:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/06 11:27:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_putnbr(int nb);

int main () {

    ft_putnbr(-21364);

    return 0;
}

void ft_putnbr(int nb)
{
    char c;
    
    if (nb == -2147483648)
        write (1, "-2147483648", 12);
    else
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = nb * -1;
        }
        if (nb < 10)
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
}