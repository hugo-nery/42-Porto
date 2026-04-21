/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:28:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/21 20:57:34 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\nForgotX inputX\n");

		// printf("%s\n", (char *)ft_calloc(5, sizeof(char)));
	}
	else if (argc == 4)
	{
		// printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		// printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
		// printf("%d\n", ft_atoi(argv[1]));
		// printf("%s", ft_strchr(argv[1], *argv[2]));
		// printf("%s", ft_strrchr(argv[1], *argv[2]));
		
		// printf("str = %s\n", str);
		
		// ft_bzero(str, ft_atoi(argv[1]));
		
		// ft_memset(str, *argv[1], ft_atoi(argv[2]));
		// str[ft_atoi(argv[2])] = '\0';
		
		// ft_memcpy(dest, argv[1], ft_strlen(argv[1]) + 1);
		
		// ft_strlcpy(str, "42-is-cool", 20);
		// printf("%s\n\n", str);

		// ft_memmove(str, &str[3], 7);
		// printf("dest = %s\n", str);

		// printf ("%d\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
		
		// ft_strlcpy(str, "123456789", 10);
		// ft_memmove(&str[2], str, 5);
		// printf("dest = %s\n", str);

		printf("%s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));

	}
	else
		printf("coco\n");

	return 0;
}
