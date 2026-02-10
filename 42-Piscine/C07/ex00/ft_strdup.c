/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:30:26 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/10 21:59:35 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main (){

    char text[] = "hugo nery";

    char *new_str = strdup(text);

    printf("%s", new_str);

    return 0;
}

char *ft_strdup(char *src)
{
    return (NULL);
}