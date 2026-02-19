/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:59:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 19:25:15 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print1st(char *str);

int main (int argc, char **argv)
{
    int i;

    if (argc == 2)
        ft_print1st(argv[1]);
    
    write (1, "\n", 1);
    
}

void ft_print1st(char *str)
{
    int i;
    int count;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            i++;
        else
        {
            while (str[i] != ' ')
            {
                write(1, &str[i], 1);
                i++;
            }
            break;
        }
    }
}
