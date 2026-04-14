/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:01:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/14 15:44:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		j;
	int		i;
	int		min_idx;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = j;
		min_idx = i;
		while (i < argc)
		{
			if (ft_strcmp(argv[min_idx], argv[i]) > 0)
				min_idx = i;
			i++;
		}
		if (min_idx != i)
		{
			temp = argv[j];
			argv[j] = argv[min_idx];
			argv[min_idx] = temp;
		}
		ft_putstr(argv[j++]);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
		if (*(s1++) != *(s2++))
			return (*(--s1) - *(--s2));
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

// void ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }