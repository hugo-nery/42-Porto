/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_prox.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:48:40 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/09 19:59:24 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_lib.h"

int	ft_sqrt_prox(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt <= nb)
	{
		if (sqrt * sqrt >= nb)
			break ;
		sqrt++;
	}
	return (sqrt);
}
