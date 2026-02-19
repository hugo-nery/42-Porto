/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:31:22 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/19 12:44:45 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet);

int main ()
{
    print_bits (255);
}

void	print_bits(unsigned char octet)
{
    int bit;
    unsigned char mask;

    mask = 0b10000000;

    while (mask)
    {
        bit = 0;
        if (octet & mask)
            bit = 1;
        write (1, &"01"[bit], 1);
        mask >>= 1;
    }
    
}