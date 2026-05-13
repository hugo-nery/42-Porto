/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:35:58 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/05 17:57:25 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_pholder(va_list args, char c);
int	ft_putchr(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	ft_ptrtreat(uintptr_t p);
int	ft_putptr(uintptr_t p);
int	ft_putuns(unsigned int nbr);
int	ft_puthexa(uintptr_t p, char c);

#endif
