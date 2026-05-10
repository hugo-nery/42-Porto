/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/10 22:21:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void ft_update_text(int fd, char **texto);

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
	ft_update_text(fd, &text[fd]);
	if (!text[fd] || text[fd][0] == '\0')
		return (free(text[fd]), text[fd] = NULL, NULL);
	len = 0;
	while (text[fd][len] && text[fd][len] != '\n')
		len++;
	if (text[fd][len] == '\n')
		len++;
	line = ft_substr(text[fd], 0, len);
	temp = ft_substr(text[fd], len, ft_strlen(text[fd]) - len);
	free(text[fd]);
	text[fd] = temp;
	return (line);
}

static void	ft_update_text(int fd, char **texto)
{
	char	*buff;
	int		rd;

	buff = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return ;
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
}

#include <stdio.h>

int main()
{
	
	int fd = open("outro_teste.txt", O_RDONLY);
	
	printf ("1 %s", get_next_line_bonus(fd));
	printf ("2 %s", get_next_line_bonus(fd));
	printf ("3 %s", get_next_line_bonus(fd));
	printf ("4 %s", get_next_line_bonus(fd));
	printf ("5 %s", get_next_line_bonus(fd));
	printf ("6 %s", get_next_line_bonus(fd));
	printf ("7 %s", get_next_line_bonus(fd));
	printf ("8 %s", get_next_line_bonus(fd));
	printf ("9 %s", get_next_line_bonus(fd));
	// printf ("10 %s", get_next_line_bonus(fd));
	// printf ("11 %s", get_next_line_bonus(fd));
	// printf ("12 %s", get_next_line_bonus(fd));
	// printf ("13 %s", get_next_line_bonus(fd));
	// printf ("14 %s", get_next_line_bonus(fd));
	// printf ("15 %s", get_next_line_bonus(fd));

	close(fd);
	
	return (0);
}