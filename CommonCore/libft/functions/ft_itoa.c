/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:23:47 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/22 17:21:42 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calclen(int n);

char	*ft_itoa(int n)
{
	char	*num_str;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_calclen(n);
	num_str = malloc((len + 1) * sizeof(char));
	if (!num_str)
		return (NULL);
	if (n == 0)
		num_str[0] = '0';
	if (n < 0)
	{
		n = -(n);
		num_str[0] = '-';
	}
	num_str[len] = '\0';
	while (n > 0)
	{
		num_str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (num_str);
}

static int	ft_calclen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -(n);
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
