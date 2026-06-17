/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:50:30 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 12:23:31 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:
// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 8;
	while (i--)
	{
		if (((octet >> i) & 1) == 1)
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write(1, "\n", 1);
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main()
{
	int num;

	num = 65;
	print_bits(num);
	num = swap_bits(num);
	print_bits(num);
}