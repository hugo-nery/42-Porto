/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:33:31 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/18 14:47:51 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);
void ft_printstr(char *str);
int ft_already_in(char c, char *str);
void ft_inter(char *in_str, char *text);

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1], argv[2]);
    
    ft_printstr("\n");

    return (0);
}

void ft_inter(char *in_str, char *text)
{
    int i;
    int z;
    char v_inter[ft_strlen(in_str) + 1];

    z = 0;
    i = 0;
    while (in_str[i] != '\0')
    {
        if (ft_already_in(in_str[i], text) && !ft_already_in(in_str[i], v_inter))
        {
            v_inter[z++] = in_str[i];
            v_inter[z] = '\0';
        }
        i++;
    }
    ft_printstr(v_inter);
}

int ft_already_in(char c, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    
    return (i);
}

void ft_printstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    
}