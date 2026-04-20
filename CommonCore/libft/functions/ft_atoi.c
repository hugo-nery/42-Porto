/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:04:28 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/20 22:00:54 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sinal;

	num = 0;
	sinal = 1;
	if (*str == '-')
	{
		sinal = -1;
		str++;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*(str++) - '0');
	return (num * sinal);
}
