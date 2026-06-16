/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:02:57 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/16 17:42:44 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2,
// otherwise it returns 0.

// Your function must be declared as follows:

int is_power_of_2(unsigned int n)
{
	int pwr;
	int total;

	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	pwr = 0;
	total = 1;
	while (pwr <= n && total <= n)
	{
		total *= 2;
		if (total == n)
			return (1);
		pwr++;
	}
	return (0);
}

#include <stdio.h>

int main ()
{
	int x = 0;
	while (x <= 515)
	{
		if (is_power_of_2(x))
			printf("%d = true\n", x);
		x++;
	}
	return (0);
}