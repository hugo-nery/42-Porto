/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:21:14 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/24 17:04:41 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **new_lst;
	t_list *new_node;
	void *new_content;

	if (!lst || !f || !del)
		return (NULL);

	new_lst = NULL;

	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_node);
			ft_lstclear(new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(new_lst, new_node);
		lst = lst->next;
	}
	return (*new_lst);
}
