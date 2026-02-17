/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 17:19:36 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 16:57:41 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// #include <stdio.h>

char	*create_empty_str(void);
int		ft_strlen(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_super_strcat(int *pos, char *dest, char *src, char *sep);

// int main (int argc, char **argv){

//     if (argc <= 1)
//         printf("Invalid nb of arguments!");

//     else
//         printf("%s", ft_strjoin(argc - 2, &argv[2], argv[1]));

//     return 0;
// }

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_len;
	char	*text;

	if (size == 0)
		return (create_empty_str());
	str_len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		str_len += ft_strlen(strs[i++]);
	text = malloc((str_len + 1) * sizeof(char));
	if (text == NULL)
		return (create_empty_str());
	i = 0;
	str_len = 0;
	while (i < size - 1)
		ft_super_strcat(&str_len, text, strs[i++], sep);
	ft_super_strcat(&str_len, text, strs[i], "");
	return (text);
}

char	*create_empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (str != NULL)
		str[0] = '\0';
	return (str);
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
	dest[*pos] = '\0';
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
