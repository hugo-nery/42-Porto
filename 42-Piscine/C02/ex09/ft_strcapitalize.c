/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:08:09 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 15:21:48 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int	ft_str_is_alpha(char c)
{
	if ((c < 'A' || c > 'Z')
		&& ((c < 'a' || c > 'z')))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

// cc -Wall -Wextra -Werror

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_str_is_alpha(str[i])
			&& ft_str_is_lowercase(str[i]))
			str[i] -= 32;
		if (ft_str_is_uppercase(str[i]))
			str[i] += 32;
		if (ft_str_is_lowercase(str[i])
			&& !ft_str_is_alpha(str[i - 1])
			&& !ft_str_is_numeric(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int main () {
// 	char text[] = "oLA, tudo bem? 42Palavras quarenta-e-duas; cinquenta+e+um";
// 	printf(" %s\n", text);
// 	ft_strcapitalize(text);
// 	printf("-%s\n", text);
// 	printf(" Ola, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um");
// 	return 0;
// }