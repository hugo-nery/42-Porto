/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:13:26 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/05 15:57:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		i += ft_putchr(str[i]);
	return (i);
}
