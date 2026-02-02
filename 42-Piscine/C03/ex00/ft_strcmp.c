/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:27:36 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/02 20:59:40 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main () {

    char text1[] = "Hugo Nery";
    char text2[] = "Hugo";

    printf("%d", ft_strcmp(text1, text2));

    return 0;
}

int ft_strcmp(char *s1, char *s2) {

    int i;

    if (s1 != NULL && s2 != NULL)
    {
        i = 0;
        while (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] != s2[i])
                return (s1[i] - s2[i]);
            i++;
        }
        return 0;
    }
    return 0;
}

// cc -Wall -Wextra -Werror

// hugo x hugo = 0
// hugo x huga = 1
// huga x hugo = -1