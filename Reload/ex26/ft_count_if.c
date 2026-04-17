/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:24:56 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/16 12:16:18 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_is_alpha(char *str);
// int ft_count_if(char **tab, int (*f)(char*));

// int main (int argc, char **argv)
// {
// 	if (argc > 1)
// 		printf("count = %d\n", ft_count_if(&argv[1], &ft_is_alpha));

// 	return 0;
// }

// int	ft_is_alpha(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= '0' && str[i] <= '9')
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
