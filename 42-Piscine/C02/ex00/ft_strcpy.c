/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:12:26 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/31 17:44:32 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main () {

    char name[] = "hugo nery";

    int len = sizeof(name) / sizeof(name[0]);

    // printf("%d",len);

    char my_arr[len];
    
    ft_strcpy(name, my_arr);

    int i = 0;
    while(my_arr[i] != '\0'){
        printf("%c", my_arr[i]);
        i++;
    }

    return 0;
}

char *ft_strcpy(char *dest, char *src) {

    int i = 0;
    while(src[i] != '\0'){
        printf("%c", src[i]);
        dest[i] = src[i];
        i++;
    }

    return dest;
}

// cc  -Wall -Wextra -Werror