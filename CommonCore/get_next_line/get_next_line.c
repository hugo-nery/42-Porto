/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/08 16:32:05 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buff;
	size_t		len;
	int 		rd;

	if (BUFFER_SIZE <= 0)
		return (NULL);

	buff = malloc ((BUFFER_SIZE) * sizeof(char));
	if (!buff)
		return (NULL);

	if (line == NULL)
	{
		line = malloc ((BUFFER_SIZE) * sizeof(char));
		if (!line)
			return (NULL);
	}
	
	rd = 1;
	len = 0;
	while (line)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd < BUFFER_SIZE)
			buff[rd + 1] = '\0';
			
		line = ft_strjoin(line, buff);
		while (line[len])
		{
			if (line[len] == '\n')
			{
				len++;
				buff = ft_substr(line, 0, len);
				line = ft_substr(line, len, (ft_strlen(line) - len));
				len = 0;
				return (buff);
			}				
			len++;
		}
		if (line[ft_strlen(line) + 1] == '\0')
			return (line);

	}
	return (line);
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
	// printf ("10 %s", get_next_line(fd));
	// printf ("11 %s", get_next_line(fd));
	// printf ("12 %s", get_next_line(fd));
	// printf ("13 %s", get_next_line(fd));
	// printf ("14 %s", get_next_line(fd));
	// printf ("15 %s", get_next_line(fd));


	close(fd);
	return (0);
}