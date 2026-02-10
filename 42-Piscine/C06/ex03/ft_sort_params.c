/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:35:00 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/10 14:39:38 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printstr(char *str);
void sort_args (char **dest, int args_count, char **args_list);

int main(int argc, char **argv)
{
    // char **my_args;

    if (argc <= 1)
        return (1);
    else
    {
        int i;

        i = 1;
        while (i < argc)
        {
            write(1, &argv[i][0], 1);
            write(1, "\n", 1);
            i++;
        }

        // my_args = NULL;
        // sort_args(my_args, argc, argv);
        
        // int i;
        
        // i = 0;
        // while (i < argc)
        // {
        //     ft_printstr(my_args[i]);
        //     i++;
        // }
    }
    return (0);
}

void sort_args (char **dest, int args_count, char **args_list)
{
    int i;

    i = 0;
    while (i < args_count)
    {
        /* code */
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