/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:19:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/05/07 18:18:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buff;
	size_t		len;

	buff = malloc ((BUFFER_SIZE) * sizeof(char));
	if (!buff)
		return (NULL);

	if (line == NULL)
	{
		line = malloc ((BUFFER_SIZE) * sizeof(char));
		if (!line)
			return (NULL);
	}

	while (read(fd, buff, BUFFER_SIZE))
		line = ft_strjoin(line, buff);

	if (read(fd, buff, BUFFER_SIZE) == 0)
	{
		len = 0;
		while (line[len])
		{
			if (line[len] == '\n')
			{
				buff = ft_substr(line, 0, len);
				line = ft_substr(line, len + 1, (ft_strlen(line) - len));
				return (buff);
			}
			len++;
		}
		return (line);
	}
	return (NULL);
}

#include <stdio.h>

int main()
{
	
	int fd = open("text.txt", O_RDONLY);

	printf ("1 %s\n", get_next_line(fd));
	printf ("2 %s\n", get_next_line(fd));
	printf ("3 %s\n", get_next_line(fd));
	printf ("4 %s\n", get_next_line(fd));
	printf ("5 %s\n", get_next_line(fd));
	printf ("6 %s\n", get_next_line(fd));
	printf ("7 %s\n", get_next_line(fd));
	printf ("8 %s\n", get_next_line(fd));
	printf ("9 %s\n", get_next_line(fd));
	printf ("10 %s\n", get_next_line(fd));
	printf ("11 %s\n", get_next_line(fd));
	printf ("12 %s\n", get_next_line(fd));


	close(fd);
	return (0);
}