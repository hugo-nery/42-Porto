/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:16:47 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/13 21:51:39 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2);

// int main (int argc, char **argv){

// 	if (argc == 3)
// 		printf("%d\n", ft_strcmp(argv[1], argv[2]));

// 	return 0;
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
		if (*(s1++) != *(s2++))
			return (*(--s1) - *(--s2));
	return (0);
}
