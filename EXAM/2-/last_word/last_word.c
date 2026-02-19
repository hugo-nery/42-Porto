/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:48:34 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/18 15:08:56 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_len(char *str);
void ft_print_str(char *str);

int main (int argc, char **argv)
{
    int len = ft_str_len(argv[1]);

    if (argc == 2)
    {
        while (len > 0)
        {
            if (argv[1][len] == ' ' && argv[1][len + 1] != ' ' && argv[1][len + 1] != '\0')
            {
                len++;
                while (argv[1][len] != ' ' && argv[1][len] != '\0')
                    write(1, &argv[1][len++], 1);
                break;
            }
            len--;
        }
    }

    ft_print_str("\n");

    return 0;
}

void ft_print_str(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int ft_str_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}