/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/11 13:56:17 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char*	ft_update_text(int fd, char **texto);

char	*get_next_line(int fd)
{
	static char	*text;
	char		*temp;
	char		*line;
	size_t		len;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!text)
		text = ft_strdup("");
	if (ft_update_text(fd, &text) == NULL || *text == '\0')
	{
		free(text);
		text = NULL;
		return (NULL);
	}
	len = ft_strlen_vc(text, '\n');
	line = ft_substr(text, 0, len);
	temp = ft_substr(text, len, ft_strlen_vc(text, '\0') - len);
	free(text);
	text = temp;
	return (line);
}

static char*	ft_update_text(int fd, char **texto)
{
	char	*buff;
	int		rd;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return NULL;
	rd = 1;
	while (rd > 0 && ft_strchr(*texto, '\n') == NULL)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(*texto);
			*texto = NULL;
			break ;
		}
		buff[rd] = '\0';
		*texto = ft_strjoin_free(*texto, buff);
	}
	free (buff);
	return (*texto);
}

#include <stdio.h>

int main()
{
	
	int fd = open("text.txt", O_RDONLY);
	
	printf ("1 %s", get_next_line(fd));
	printf ("2 %s", get_next_line(fd));
	printf ("3 %s", get_next_line(fd));
	printf ("4 %s", get_next_line(fd));
	printf ("5 %s", get_next_line(fd));
	printf ("6 %s", get_next_line(fd));
	printf ("7 %s", get_next_line(fd));
	printf ("8 %s", get_next_line(fd));
	printf ("9 %s", get_next_line(fd));

	close(fd);
	
	return (0);
}

