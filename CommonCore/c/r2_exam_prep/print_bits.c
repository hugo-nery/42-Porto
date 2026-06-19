/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:43:03 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 11:51:05 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:
// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"


#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 8;
	while (i--)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int main()
{
	print_bits(3);
}
