/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:45:14 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/19 13:42:27 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char num);
unsigned char swap_bits(unsigned char octet);

void print_b (unsigned char num);
unsigned char swap_b (unsigned char octet);


int main()
{

    int num = 0b01000001;
    // print_bits(num);
    print_b (num);

    write (1, "\n", 1);
    
    // swap_bits(num);

    return 0;
}

unsigned char swap_bits(unsigned char octet)
{
    
    return (octet >> 4 | octet << 4);
}

void print_b (unsigned char num)
{
    unsigned char mask = 0b10000000;

    while (mask > 0)
    {
        write (1, (num & mask) ? "1" : "0", 1);
        mask >>= 1;
    }
}

unsigned char swap_b (unsigned char octet)
{
    int i;
    int bit;
    unsigned char mask;
    unsigned char result = 0;

    i = 4;
    mask = 0b00001000;
    while (i < 8)
    {
        bit = 0;
        if (octet & mask)
            result = result | (mask << 4);
        // write (1, &"01"[bit], 1);
        mask >>= 1;
        i++;
    }
    i = 0;
    mask = 0b10000000;
    while (i < 4)
    {
        bit = 0;
        if (octet & mask)
            result = result | (mask >> 4);
        // write (1, &"01"[bit], 1);
        mask >>= 1;
        i++;
    }
    return (result);
}

void print_b(unsigned char num)
{
    int bit;
    unsigned char mask;

    mask = 0b10000000;

    while (mask > 0)
    {
        bit = 0;
        if (num & mask)
            bit = 1;
        write (1, &"01"[bit], 1);
        mask >>= 1;
    }
    
}

