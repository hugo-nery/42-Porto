/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:49:37 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/05 23:04:07 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int	ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);

int main (int argc, char *argv[]){

    if (argc > 2)
        ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
    else
        printf("Missign argument!");

    return 0;
}

void ft_putnbr_base(int nbr, char *base)
{
    printf("%d %s", nbr*5, base);
}


int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	total;

	i = 0;
	while (str[i] <= 32)
		i++;
	sinal = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal++;
		i++;
	}
	total = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = (str[i] - '0') + total * 10;
		i++;
	}
	if (sinal % 2 != 0)
		total *= -1;
	return (total);
}