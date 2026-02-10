/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:37:16 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 21:06:13 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_atoi(char *str);

// int main (int argc, char *argv[]) {

// 	// printf("%d", ft_atoi("        ---++---++--++-+1342834ab567"));

// 	if (argc > 1)
// 		printf("%d", ft_atoi(argv[1]));
// 	else
// 		printf("Missing Argument!");

//     return 0;
// }

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	total;

	i = 0;
	while (str[i] != '\0' && str[i] <= 32)
	{
		i++;
	}
	sinal = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	total = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	return (total * sinal);
}
