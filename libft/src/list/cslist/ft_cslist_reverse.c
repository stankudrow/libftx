/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:38:23 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/26 11:26:51 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

void	ft_cslist_reverse(t_cslist **lst)
{
	t_cslist	*new;
	t_cslist	*head;
	t_cslist	*node;

	new = NULL;
	head = *lst;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		node->next = node;
		ft_cslist_add_front(&new, node);
		if (*lst == head)
			break ;
	}
	*lst = new;
}
