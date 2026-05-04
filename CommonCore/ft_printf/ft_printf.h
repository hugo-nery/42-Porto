/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:35:58 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/04 19:57:16 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "unistd.h"
#include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_putchr(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int ft_putptr(uintptr_t p);

//not yet
int ft_putuns(unsigned int nbr);
int	ft_puthexa(size_t nbr, char *base);




#endif