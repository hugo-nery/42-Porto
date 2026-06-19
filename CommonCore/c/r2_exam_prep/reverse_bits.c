/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:25:21 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 12:39:56 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;

	i = 8;
	while (i--)
	{
		if (((octet >> i) & 1) == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 2);
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev;
	int i;

	rev = 0;
	i = 8;
	while (i--)
	{
		rev = (rev << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (rev);
}
#include <stdio.h>

int main()
{
	int num = 5;
	print_bits(num);
	num = reverse_bits(num);
	print_bits(num);
}