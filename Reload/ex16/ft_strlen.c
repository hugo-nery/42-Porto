/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:07:32 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 21:16:04 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_strlen(char *str);

// int main (int argc, char **argv){

// 	if (argc > 1)
// 		printf("%d\n", ft_strlen(argv[1]));
// 	else
// 		printf("0\n");

// 	return 0;
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
