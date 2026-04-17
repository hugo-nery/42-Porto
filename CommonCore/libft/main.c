/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:28:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/17 15:38:08 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

#include "libft.h"

int main(int argc, char **argv)
{
	char *a = argv[1];
	char b[10];

	if (argc < 2)
	{
		printf("%d", ft_strlen("hugo"));

		printf("\nforgotx inputx\n");
	}
	else
	{
		printf("%d\n", ft_strlcpy(b, a, atoi(argv[2])));
		printf("%s\n%s\n", a, b);

		// printf("%zu\n", strlcpy(b, a, atoi(argv[2])));
		// printf("%s\n%s\n", a, b);

	}
	return 0;
}