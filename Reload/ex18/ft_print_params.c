/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:53:34 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 22:04:36 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
		while (i < argc)
			ft_putstr(argv[i++]);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*(str++)), 1);
	write(1, "\n", 1);
}
