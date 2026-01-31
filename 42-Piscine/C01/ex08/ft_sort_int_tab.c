/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:06:10 by hde-albu          #+#    #+#             */
/*   Updated: 2026/01/31 16:42:13 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main () {

    int n_lst[] = {7,0,6,4,2,5,3,1};

    int len = sizeof(n_lst) / sizeof(n_lst[0]);

    ft_sort_int_tab(n_lst, len);

    int i = 0;
    while (i < len) {
        printf ("%d ", n_lst[i]);
        i++;
    }

    return 0;
}

void ft_sort_int_tab(int *tab, int size) {

    int i = 0;
    int x = 0;
    int idx_min = 0;


    while (i < size - 1) {
        
        idx_min = i;
        x = i + 1;
        
        while (x < size) {

            if (tab[idx_min] > tab[x]){
                idx_min = x;
            }
            x++;
        }

        if (idx_min != i) {
            int temp = tab[i];
            
            tab[i] = tab[idx_min];
            tab[idx_min] = temp;
        }
        i++;
    }

    //7,0,6,4,2,5,3,1
}

//cc -Wall -Wextra -Werror ft