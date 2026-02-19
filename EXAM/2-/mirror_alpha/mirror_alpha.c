/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mirror_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:17:43 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/19 17:27:22 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char mirror_alpha (char c);

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
        {
            char m = mirror_alpha(*argv[1]);
            
            write(1, &m, 1);
            argv[1]++;
        }
    }
    
    write (1, "\n", 1);
    return 0;
}

char mirror_alpha (char c)
{
    
    if (c >= 'a' && c <= 'm')
        return ('z' - (c - 'a'));

    if (c >= 'n' && c <= 'z')
        return ('a' + ('z' - c));

    if (c >= 'A' && c <= 'M')
        return ('Z' - (c - 'A'));
    
    if (c >= 'N' && c <= 'Z')
        return ('A' + ('Z' - c));
    
    else
        return (c);
}


//a b c d e f g h i j k l m
//n o p q r s t u v w x y z