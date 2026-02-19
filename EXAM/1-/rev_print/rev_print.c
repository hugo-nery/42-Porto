/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:11:47 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 20:18:45 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str);

int main(int argc, char **argv)
{
    int i = 0;
    int len = 0;
    
    if (argc == 2)
    {
        len = ft_strlen(argv[1]) - 1;
        while (len >= 0)
        {
            write (1, &argv[1][len], 1);
            len--;
        }
    }
    
    write (1, "\n", 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}