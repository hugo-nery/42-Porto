/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:45:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/05 21:02:12 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// char *ft_strstr(char *str, char *to_find);

// int main () {

// 	char myStr[] = "The rain in Spain falls mainly on the plains.";

// 	char *myPtr = ft_strstr(myStr, "pra");

//     printf("%s", myPtr);

// 	return 0;
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (to_find == NULL)
		return (str);
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			x = 0;
			while (str[i + x] == to_find[x] && to_find[x] != '\0')
			{
				x++;
			}
			if (to_find[x] == '\0')
			{
				return (&str[i]);
			}
			i++;
		}
	}
	return (0);
}
//NULL