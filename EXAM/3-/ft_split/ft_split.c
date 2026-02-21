/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:09:07 by hde-albu          #+#    #+#             */
/*   Updated: 2026/02/21 11:09:07 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str);
int count_words(char *str);
int not_word(char c);


int main(int argc, char **argv)
{
    char **my_av = NULL;

    if (argc == 2)
    {
        my_av = ft_split(argv[1]);

        if(my_av == NULL)
            printf("No string passed - WRONG\n");

        else
        {
            if (my_av[0] == NULL)
                printf("No string or words - RETURNED EMPTY **arr - RIGHT\n");

            else
            {
                int i = 0;
                while (i < count_words(argv[1]))
                    printf("%s\n", my_av[i++]);
            }
            free(my_av);
        }
    }

    else
    	printf("wrong nb of args\n");

    return (0);
}

char **ft_split(char *str)
{
    char **my_args = NULL;
    int i, z, pos, str_len, num_words;

    if (str == NULL)
	    return (NULL);

    num_words = count_words(str);
    
    my_args = malloc((num_words + 1) * sizeof(char*));
    if (my_args == NULL)
        return (NULL);
    
    z = 0; i = 0;
    while (str[i] != '\0')
    {
        if (!not_word(str[i]))
        {
            str_len = i;
            while (!not_word(str[str_len]) && str[str_len] != '\0')
                str_len++;
            
            my_args[z] = malloc(((str_len - i) + 1) * sizeof(char));
            if (my_args[z] == NULL)
                return (NULL);
            
            pos = 0;
            while (pos < str_len - i)
            {
                my_args[z][pos] = str[i + pos];
                pos++;
            }
            my_args[z][pos] = '\0';
            z++;
            i = str_len;
        }
        else
            i++;
    }
    my_args[z] = NULL;

    return (my_args);    
}

int count_words(char *str)
{
    int count;

    count = 0;
    if (str == NULL || *str == '\0')
        return (count);
    
    if (!not_word(*str))
        count++;

    while (*str)
    {
        if (not_word(*str) && !not_word(*(str + 1)) && *(str + 1) != '\0')
            count++;
        str++;
    }
    return (count);
}

int not_word(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}
