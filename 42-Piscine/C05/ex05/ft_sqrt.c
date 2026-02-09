/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:13:41 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/09 12:30:50 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main (){

    printf ("%d", ft_sqrt(9));

    return 0;
}

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i != nb)
        i++;

    return(i);
}