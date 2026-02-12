/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:42:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/12 12:53:07 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

void	ft_strcat(int *pos, char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

// int	main (int argc, char **argv)
// {
//     if (argc <= 1)
//         printf("Missing arguments!");

//     else
// 	{
// 		char *mine;

// 		// mine = ft_strjoin(argc, argv, ", ");
// 		// printf ("%s", mine);
// 		// free(mine);

// 		mine = ft_strjoin(0, argv, ", ");
// 		free(mine);
// 		printf ("%s", mine);
// 	}	
//     return 0;
// }

void	ft_strcat(int *pos, char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*pos] = src[i];
		i++;
		(*pos)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_len;
	char	*text;

	text = malloc(size * sizeof(strs[0]));
	if (text == NULL)
		return (NULL);
	if (size <= 0)
	{
		text = NULL;
		return (text);
	}
	str_len = 0;
	i = 1;
	while (i < size)
	{
		ft_strcat(&str_len, text, strs[i]);
		ft_strcat(&str_len, text, sep);
		i++;
	}
	return (text);
}
