/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:46:10 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 14:02:20 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;
	int digit;
	
	if (!str || str_base < 2 || str_base > 16)
		return (0);
	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}	
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			digit = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			digit = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			digit = *str - 'A' + 10;
		else
			digit = -1;
		
		if (digit >= str_base)
		{
			return 
		}
			



		str++;
	}
	
	
	
	
}


//
static int	get_value(char c, int base)
{
	int	val;

	if (c >= '0' && c <= '9')
		val = c - '0';
	else if (c >= 'a' && c <= 'f')
		val = c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		val = c - 'A' + 10;
	else
		return (-1);
	
	if (val >= base)
		return (-1);
	return (val);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	digit;

	if (!str || str_base < 2 || str_base > 16)
		return (0);
	result = 0;
	sign = 1;
	// 1. Skip whitespace characters
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	// 2. Handle simple polarity operators
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	// 3. Process matching base digits dynamically
	while (*str)
	{
		digit = get_value(*str, str_base);
		if (digit == -1)
			break ;
		result = (result * str_base) + digit;
		str++;
	}
	return (result * sign);
}