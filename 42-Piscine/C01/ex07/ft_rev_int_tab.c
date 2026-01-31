/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:32:19 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/30 13:58:57 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main () {

    int n_lst[] = {1,2,3,4};

    int size = sizeof(n_lst) / sizeof(n_lst[0]);

    int i = 0;
    while (i < size){
        printf("%d", n_lst[i]);
        i++;
    }

    printf("---------------%d--------------",i);

    // printf("\nantes\n");

    // ft_rev_int_tab(n_lst, i);

    // printf("\ndepois\n");
    // i = 0;
    // while (n_lst[i] != '\0'){
    //     printf("%d", n_lst[i]);
    //     i++;
    // }

    return 0;
}

void ft_rev_int_tab(int *tab, int size) {

    int temp_list [size];

    int i = 0;
    while (i <= size) {

        tab[i] = temp_list[size - i];
        
        // printf("i_%d - tab = %d\t", i, tab[i]);
        // printf("temp = %d\n", temp_list[i]);

        i++;
    }

    printf("\n\n");

    i = 0;
    while (i <= size) {
        
        printf("i_%d - tab = %d\t", i, tab[i]);
        printf("temp = %d\n", temp_list[i]);

        i++;
    }

}

//cc  -Wall -Wextra -Werror ft