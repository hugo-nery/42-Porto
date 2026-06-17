/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:19:53 by hde-albu          #+#    #+#             */
/*   Updated: 2026/06/17 13:43:49 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
    struct s_list	*next;
    void			*data;
}	 				t_list;

void *print_data(void *data)
{
	char *str;

	str = (char *)data;
	while (*str)
		write(1, &*(str++), 1);
	write (1, "\n", 1);
	return (data);
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list || !f)
		return ;

	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

void ft_lst_addback(t_list **head, t_list *node)
{
	if (!node)
		return ;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return ;
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = node;
	
		
}

int main()
{
	t_list *lst;
	t_list node_1;
	t_list node_2;
	t_list node_3;

	node_1.data = "hugo";	
	node_2.data = "livia";
	node_3.data = "victor";

	lst = NULL;
	ft_lst_addback(&lst, &node_1);
	ft_lst_addback(&lst, &node_2);
	ft_lst_addback(&lst, &node_3);

	ft_list_foreach(&node_1, (void *)print_data);

	return (0);
}