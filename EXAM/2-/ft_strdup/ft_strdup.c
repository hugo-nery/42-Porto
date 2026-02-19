/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:20:37 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/18 12:32:07 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);
char    *ft_strdup(char *src);

int main ()
{
    char name[] = "hugo nery";
    char *new;

    new = NULL;

    printf("%s\n", new);

    new = ft_strdup("dsfsdfas sa sad dsf sdf sd dsf sfds");

    printf("%s\n", new);

    return 0;
}

char    *ft_strdup(char *src)
{
    int i;
    char *new_str;

    new_str = "";
    if (src == NULL || ft_strlen(src) == 0)
        return (new_str);
    
    new_str = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (new_str == NULL)
        return (new_str);
    i = 0;
    while (src[i] != '\0')
    {
        new_str[i] = src[i];
        i++;
    }
    
    new_str[i] = '\0';
    
    return (new_str);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}