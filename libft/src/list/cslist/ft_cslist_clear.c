/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:50:54 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/26 11:27:49 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

void	ft_cslist_clear(t_cslist **lst, void (*del)(void *))
{
	t_cslist	*head;
	t_cslist	*node;

	head = *lst;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_cslist_delone(node, del);
		if (*lst == head)
			break ;
	}
	*lst = NULL;
}
