/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:28:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/20 22:37:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
	char str[100];
	
	if (argc < 2)
	{
		printf("\nForgotX inputX\n");
	}
	else if (argc == 2)
	{
		// printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
		// printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
		// printf("%d\n", ft_atoi(argv[1]));
		// printf("%s", ft_strchr(argv[1], *argv[2]));
		// printf("%s", ft_strrchr(argv[1], *argv[2]));
		
		ft_strlcpy(str, "hello", 10);
		printf("%s\n", str);

		ft_bzero(str, ft_atoi(argv[1]));
		// ft_memset(str, *argv[1], ft_atoi(argv[2]));
		// str[ft_atoi(argv[2])] = '\0';
		printf("%s\n", str);

	}
	else
		printf("coco\n");

	return 0;
}
