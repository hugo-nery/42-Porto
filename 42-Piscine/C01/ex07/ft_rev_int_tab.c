/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:32:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/31 12:21:00 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_rev_int_tab(int *tab, int size);

// int main () {
//     int n_lst[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int len = sizeof(n_lst) / sizeof(n_lst[0]);

//     ft_rev_int_tab(n_lst, len);

// 	int i = 0;
// 	while (i < len) {
// 		printf("%d,", n_lst[i]);
// 		i++;
// 	}

//     return 0;
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	last;

	i = 0;
	temp = 0;
	last = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[last];
		tab[last] = temp;
		i++;
		last--;
	}
}

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int	temp_list [size];
// 	int	i;

// 	size -= 1;
// 	i = 0;
// 	while (i <= size)
// 	{
// 		temp_list[i] = tab[size - i];
// 		i++;
// 	}
// 	i = 0;
// 	while (i <= size)
// 	{
// 		tab[i] = temp_list[i];
// 		i++;
// 	}
// }

//cc -Wall -Wextra -Werror ft