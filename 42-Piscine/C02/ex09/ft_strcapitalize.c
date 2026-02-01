/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:08:09 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/01 23:53:16 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

char *ft_strcapitalize(char *str);
int ft_str_is_lowercase(char c);
int	ft_str_is_alpha(char c);
int	ft_str_is_numeric(char c);
char ft_strupcase(char c);


int main () {

    char text[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", text);

	ft_strcapitalize(text);

    return 0;
}

char *ft_strcapitalize(char *str)
{
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if(ft_str_is_lowercase(str[i])
		&& !ft_str_is_alpha(str[i - 1]) 
		&& !ft_str_is_numeric(str[i - 1]))
		{
			str[i] = ft_strupcase(str[i]);
		}
		printf("%c", str[i]);
		i++;
	}

	// printf("\nOla, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um");
	

    return (str);
}

int	ft_str_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	return (1);
}

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

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// cc -Wall -Wextra -Werror