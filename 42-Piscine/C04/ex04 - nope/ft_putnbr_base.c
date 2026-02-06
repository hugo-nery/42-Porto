/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:49:37 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/06 12:38:57 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_itohx(int nb);
void ft_putnbr(int nb);
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
	int i;
	char octa[] = "poneyvif";
	char hexa[] = "0123456789ABCDEF";
	
	i = 0;
	while (base[i] == octa[i] && base[i] != '\0' && octa[i] != '\0')
	{
		i++;
	}

	if (base[i] == '\0' && octa[i] == '\0')
		write(1, "octal", 5);
	
	else if (i == 0)
	{
		while (base[i] == hexa[i] && base[i] != '\0' && hexa[i] != '\0')
		{
			i++;
		}

		if (i == 2 && base[i] == '\0')
			write(1, "binary", 6);
		
		else if (i == 10 && base[i] == '\0')
			ft_putnbr(nbr);
		
		else if (i == 16 && base[i] == '\0')
			ft_putnbr(ft_itohx(nbr));
			//write(1, "hexadecimal", 11)	;

		else
			write(1, "", 1);
	}
	else
		write(1, "", 1);

}

int ft_itohx(int nb)
{
	int res;
	
	res = 0;
	if (nb < 10)
		return (res += nb);
	else
		res = (res % 16) * 10;
	
	return (ft_itohx(res));
}

void ft_putnbr(int nb)
{
    char c;
    
    if (nb == -2147483648)
        write (1, "-2147483648", 12);
    else
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = nb * -1;
        }
        if (nb < 10)
        {
            c = nb + '0';
            write (1, &c, 1);
        }
        else
        {
            ft_putnbr(nb / 10);
            ft_putnbr(nb % 10);
        }
    }
}

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	total;

	i = 0;
	while (str[i] != '\0' && str[i] <= 32)
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