/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:30:58 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/19 21:10:22 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_len (char *str);
int ft_already_in(char c, char *str);
void ft_str_cat (char *txt, char *s1, char *s2);

int main(int argc, char **argv)
{
    
    if (argc != 3)
        printf ("Invalid args!");
    else
    {
        char text[ft_str_len(argv[1]) + ft_str_len(argv[2]) + 1];
        text[0] = '\0';
        ft_str_cat(text, argv[1], argv[2]);
        // printf("%s", text);
    }

    // write (1, "\n", 1);
    
    return 0;
}

void ft_str_cat (char *txt, char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i] != '\0')
    {
        if (!ft_already_in(s1[i], txt))
            txt[i] = s1[i];
        i++;
        txt[i] = '\0';
    }
    j = 0;
    while (s2[j] != '\0')
    {
        if (!ft_already_in(s2[j], txt))
        {
            txt[i] = s2[j];
            i++;
        }
        j++;
        txt[i + j] = '\0';
    }
    printf("%s\n", txt);
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

int ft_str_len (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}