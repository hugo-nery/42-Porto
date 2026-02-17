/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:30:26 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 12:12:16 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>

char	*ft_strdup(char *src);

// int main (){

//     char text[] = "hugo";

//     char *new_str = ft_strdup(text);

//     printf("%s", new_str);

//     return 0;
// }

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	i = 0;
	while (src[i] != '\0')
		i++;
	new_str = malloc((i + 1) * sizeof(src[0]));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
