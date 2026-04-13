/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:59:06 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 17:03:00 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_print_numbers(void);

// int main ()
// {
//     ft_print_numbers();

//     return 0;
// }

void	ft_print_numbers(void)
{
	write (1, "0123456789", 10);
}
