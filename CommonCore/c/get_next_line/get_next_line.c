/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/12 20:12:05 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_update_text(int fd, char **texto);

char	*get_next_line(int fd)
{
	static char	*text;
	char		*temp;
	char		*line;
	size_t		len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!text)
		text = NULL;
	if (ft_update_text(fd, &text) == NULL || text[0] == '\0')
		return (free(text), text = NULL, NULL);
	len = ft_strlen_vc(text, '\n');
	line = ft_substr(text, 0, len);
	if (!line)
		return (free(text), text = NULL, NULL);
	temp = ft_substr(text, len, ft_strlen_vc(text, '\0') - len);
	if (!temp)
		return (free(line), free(text), text = NULL, NULL);
	free(text);
	text = temp;
	return (line);
}

static char	*ft_update_text(int fd, char **text)
{
	char	*buff;
	int		rd;
	size_t	pos;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (free(*text), *text = NULL, NULL);
	rd = 1;
	pos = 0;
	while (rd > 0 && ft_strchr((*text) + pos, '\n') == NULL)
	{
		pos += rd - 1;
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(*text);
			*text = NULL;
			break ;
		}
		buff[rd] = '\0';
		*text = ft_strjoin_free(*text, buff);
		if (!(*text))
			break ;
	}
	return (free(buff), *text);
}

/* 
#include <stdio.h>

int main()
{
	char *str;
	int fd = open("text.txt", O_RDONLY);
	
	str = get_next_line(fd);
	while (str)
	{
		printf ("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	
	printf ("%s", get_next_line(fd));

	free(str);
	close(fd);
	return (0);
}
 */