/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:16:20 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/16 12:13:23 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_puttext(int fd);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			write(2, "Cannot read file.\n", 18);
		else
			ft_puttext(fd);
	}
	return (0);
}

void	ft_puttext(int fd)
{
	char	f_text[42];
	int		len;

	len = read(fd, f_text, 42);
	while (len > 0)
	{
		write(1, f_text, len);
		len = read(fd, f_text, 42);
	}
	close(fd);
}
