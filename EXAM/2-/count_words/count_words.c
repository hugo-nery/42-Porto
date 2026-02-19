/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:24:53 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/16 11:44:28 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count_words(char *str);

int main (int argc, char **argv) {

    if (argc != 2)
        printf ("Invalid n arguments!!");
    
    else
        printf("%d", count_words(argv[1]));

    return 0;
}

int count_words(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    
    if (str[i] != ' ' && str[i] != '\0')
        count++;
    
    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
        i++;
    }
    
    return (count);
    
}