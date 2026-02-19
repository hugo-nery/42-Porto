/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:26:48 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 20:03:27 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printNb(int num);

int main ()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);

        else if (i % 3 == 0)
            write (1, "fizz", 4);

        else if (i % 5 == 0)
            write (1, "buzz", 4);

        else
            ft_printNb(i);

        write (1, "\n", 1);
        i++;
    }


    return (0);
}

void ft_printNb(int num)
{
    long n;

    n = num;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_printNb(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}