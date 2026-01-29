/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:49:04 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/29 19:04:44 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_is_negative(int n);
// int main () {
//     ft_is_negative (-8);
//     return 0;
// }

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
	}
	else
	{
		result = 'P';
	}
	write (1, &result, 1);
}

//cc  -Wall -Wextra -Werror 