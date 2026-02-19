/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:20:10 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 20:59:03 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str);

int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d", ft_atoi(argv[1]) * 2);
    printf("\n");
    return 0;
}

int	ft_atoi(const char *str)
{
    int i;
    int res;
    int signal;

    signal = 1;
    res = 0;
    i = 0;
    while (str[i] == ' ' && str[i] != '\n')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        signal *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * signal);
    
}