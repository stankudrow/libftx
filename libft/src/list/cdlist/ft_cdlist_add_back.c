/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:45:01 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/28 14:00:36 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

void	ft_cdlist_add_back(t_cdlist **lst, t_cdlist *node)
{
	t_cdlist	*last_lst;
	t_cdlist	*last_node;

	if (*lst)
	{
		last_lst = ft_cdlist_last(*lst);
		last_node = ft_cdlist_last(node);
		last_lst->next = node;
		node->prev = last_lst;
		last_node->next = *lst;
		(*lst)->prev = last_node;
	}
	else
		*lst = node;
}
