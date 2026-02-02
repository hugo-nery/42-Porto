/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:40:08 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 11:09:40 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_putstr(char *str);

int main () {
    char name [0];// = "hugo de a s nery";
	ft_putstr(NULL);

    return 0;
}

void	ft_putstr(char *str)
{
	if(str == NULL)
		return;

	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// cc -Wall -Wextra -Werror