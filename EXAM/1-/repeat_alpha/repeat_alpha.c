/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:29:42 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/17 15:41:06 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isLower(char c);
int ft_isCapital (char c);
void ft_printStr(char *str);
void ft_repeatChar(char *str);

int main (int argc, char **argv)
{
    // ft_printStr("hugo nery");

    if (argc == 2)
        ft_repeatChar(argv[1]);
    else
        ft_printStr("\n");

    return 0;
}

void ft_repeatChar(char *str)
{
    char c;

    while (*str)
    {
        if (ft_isCapital(*str))
        {
            c = 'A';
            while (c <= *str)
            {
                write(1, str, 1);
                c++;
            }
        }
        else if (ft_isLower(*str))
        {
            c = 'a';
            while (c <= *str)
            {
                write(1, str, 1);
                c++;
            }
        }
        else
            write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int ft_isCapital (char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int ft_isLower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

void ft_printStr(char *str)
{
    while (*str)
        write (1, &(*(str++)), 1);
}
