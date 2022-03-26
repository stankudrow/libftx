/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_add_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:22:39 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/25 10:50:08 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

void	ft_cslist_add_front(t_cslist **lst, t_cslist *node)
{
	t_cslist	*last_lst;
	t_cslist	*last_node;

	if (*lst)
	{
		last_node = ft_cslist_last(node);
		last_lst = ft_cslist_last(*lst);
		last_node->next = *lst;
		last_lst->next = node;
	}
	else
	{
		last_node = ft_cslist_last(node);
		last_node->next = node;
	}
	*lst = node;
}
