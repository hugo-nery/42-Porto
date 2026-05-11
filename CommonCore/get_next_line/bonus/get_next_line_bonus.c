/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/11 14:08:56 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_update_text(int fd, char **texto);

char	*get_next_line_bonus(int fd)
{
	static char	*text[1024];
	char		*temp;
	char		*line;
	size_t		len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!text[fd])
		text[fd] = ft_strdup("");
	if (ft_update_text(fd, &text[fd]) == NULL || text[fd][0] == '\0')
	{
		free(text[fd]);
		text[fd] = NULL;
		return (NULL);
	}
	len = ft_strlen_vc(text[fd], '\n');
	line = ft_substr(text[fd], 0, len);
	temp = ft_substr(text[fd], len, ft_strlen_vc(text[fd], '\0') - len);
	free(text[fd]);
	text[fd] = temp;
	return (line);
}

static char	*ft_update_text(int fd, char **text)
{
	char	*buff;
	int		rd;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return NULL;
	rd = 1;
	while (rd > 0 && ft_strchr(*text, '\n') == NULL)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(*text);
			*text = NULL;
			break ;
		}
		buff[rd] = '\0';
		*text = ft_strjoin_free(*text, buff);
	}
	free (buff);
	return (*text);
}

#include <stdio.h>

int main()
{
	
	int fd_1 = open("../text.txt", O_RDONLY);
	int fd_2 = open("outro_teste.txt", O_RDONLY);
	
	printf ("1 %s", get_next_line_bonus(fd_1));
	printf ("1 %s", get_next_line_bonus(fd_2));
	printf ("2 %s", get_next_line_bonus(fd_1));
	printf ("2 %s", get_next_line_bonus(fd_2));
	printf ("3 %s", get_next_line_bonus(fd_2));
	printf ("4 %s", get_next_line_bonus(fd_2));
	printf ("3 %s", get_next_line_bonus(fd_1));
	printf ("4 %s", get_next_line_bonus(fd_1));
	printf ("5 %s", get_next_line_bonus(fd_2));

	close(fd_1);
	close(fd_2);
	
	return (0);
}