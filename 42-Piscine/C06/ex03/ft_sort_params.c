/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:35:00 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/10 15:56:37 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printstr(char *str);
void sort_args (int args_count, char **args_list);

int main(int argc, char **argv)
{
    if (argc <= 1)
        return (1);
    else
    {
        char **my_args;
        
        my_args = argv;
        sort_args(argc, my_args);

        int i = 0;
        while (i < argc)
        {
            ft_printstr(my_args[i]);
        }
        
    }
    return (0);
}

void sort_args (int args_count, char **args_list)
{
    int i;
    int x;
    char *temp;

    x = 0;
    while (x < args_count)
    {
        i = 1;
        while (i < args_count - 1)
        {
            if (args_list[i][0] > args_list[i + 1][0])
            {
                temp = args_list[i];
                args_list[i] = args_list[i + 1];
                args_list[i + 1] = temp;
            }
            i++;
        }
        x++;
    }
        
}

// hugo livia victor

void ft_printstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}