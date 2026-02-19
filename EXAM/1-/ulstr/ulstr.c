/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:44:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 15:57:26 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_flipCase(char *str);

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_flipCase(argv[1]);

    write (1, "\n", 1);
    
    return (0);
}

void ft_flipCase(char *str)
{
    char c;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            c = *str - 32;
        
        else if (*str >= 'A' && *str <= 'Z')
            c = *str + 32;
        
        else
            c = *str;
        write(1, &c, 1);
        str++;
    }
}