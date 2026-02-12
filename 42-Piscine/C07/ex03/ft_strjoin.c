/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:19:36 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/12 19:34:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_super_strcat(int *pos, char *dest, char *src, char *sep);

// int main (int argc, char **argv){

//     if (argc <= 1)
//         printf("Missing arguments!");

//     else
//     {
//         printf("%s", ft_strjoin(argc, argv, ", "));
//     }

//     return 0;
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_super_strcat(int *pos, char *dest, char *src, char *sep)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*pos] = src[i];
		(*pos)++;
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		dest[*pos] = sep[i];
		(*pos)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		i;
	int		str_len;

	i = 1;
	str_len = 0;
	while (i < size)
		str_len += ft_strlen(strs[i++]);
	str_len += size * ft_strlen(sep);
	text = (char *)malloc((str_len + 1) * sizeof(char));
	if (text == NULL)
		return (NULL);
	if (size == 0)
		text = "\0";
	else
	{
		i = 1;
		str_len = 0;
		while (i < size)
		{
			ft_super_strcat(&str_len, text, strs[i], sep);
			i++;
		}
	}
	return (text);
}
