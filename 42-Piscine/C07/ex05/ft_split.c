/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:55:41 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/13 14:00:19 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int ft_is_alpha(char c);
int ft_strlen(char *str);
int ft_not_in(char c, char *str);
int ft_cs_count (char *str, char *charset);
char **ft_split(char *str, char *charset);

int main (int argc, char **argv)
{
    if (argc != 3)
        printf("Wrong number of arguments");
    
    else
       ft_split(argv[1], argv[2]);
        

    return 0;
}

char **ft_split(char *str, char *charset)
{
    int i;
    int x;
    int cs_count;
    int str_pos;
    char **split_str;

    if (str == NULL || charset == NULL)
        return (NULL);
    
    cs_count = ft_cs_count(str, charset);
    split_str = (char **)malloc(cs_count * sizeof(char *));
    if (split_str == NULL)
        return (NULL);
    i = 0;
    x = 0;
    str_pos = 0;
    while (i < cs_count)
    {
        while (str_pos < ft_strlen(str))
        {
            if (!(ft_not_in(str[str_pos], charset)))
                break;
            str_pos++;
        }
        printf("\n%d", str_pos);
        split_str[i] = (char *)malloc(str_pos * sizeof(char));
        if (split_str[i] != NULL)
        {
            x = 0;
            while (x < str_pos)
            {
                // printf("\nstr[%d] = %c", x, str[x]);
                split_str[i][x] = str[x];
                x++;
            }
            split_str[i][x] = '\0';
            // printf("\n%s", split_str[i]);
        }
        i++;
    }

    return (split_str);
}

int ft_cs_count (char *str, char *charset)
{
    int i;
    int x;
    int z;
    int cs_count;
    int flag;

    i = 1;
    cs_count = 0;
    while (i < ft_strlen(str))
    {
        x = 0;
        while (charset[x] != '\0')
        {
            if (str[i] == charset[x] && ft_not_in(str[i - 1], charset))
                cs_count++;
            x++;
        }
        i++;
    }
    if (ft_is_alpha(str[i - 1]))
        cs_count++;
    return (cs_count);
}

int ft_is_alpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int ft_not_in(char c, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}