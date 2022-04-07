/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:50:54 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/27 23:40:58 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

void	ft_cdlist_clear(t_cdlist **lst, void (*del)(void *))
{
	t_cdlist	*head;
	t_cdlist	*node;

	head = *lst;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_cdlist_delone(node, del);
		if (*lst == head)
			break ;
	}
	*lst = NULL;
}
