/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:35:00 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/12 16:51:55 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_argsort(int arg_counts, char **args_list);

int	main(int argc, char **argv)
{
	int		i;
	char	**my_args;

	if (argc <= 1)
		return (1);
	else
	{
		my_args = argv;
		ft_argsort(argc, my_args);
		i = 1;
		while (i < argc)
		{
			ft_printstr(my_args[i]);
			i++;
		}
	}
	return (0);
}

void	ft_argsort(int arg_counts, char **args_list)
{
	int		i;
	int		x;
	char	*temp;
	int		min_idx;

	temp = NULL;
	i = 1;
	while (i < arg_counts - 1)
	{
		min_idx = i;
		x = i + 1;
		while (x < arg_counts)
		{
			if (ft_strcmp(args_list[min_idx], args_list[x]) > 0)
				min_idx = x;
			x++;
		}
		if (min_idx != i)
		{
			temp = args_list[i];
			args_list[i] = args_list[min_idx];
			args_list[min_idx] = temp;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
