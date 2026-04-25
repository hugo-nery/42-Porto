/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-albu <hde-albu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:11:29 by hde-albu          #+#    #+#             */
/*   Updated: 2026/04/25 15:34:22 by hde-albu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_next;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_next;
	}
}
