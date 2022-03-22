/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:17 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 19:50:25 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_clear(t_slist **lst, void (*del)(void *))
{
	t_slist	*node;

	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_slist_delone(node, del);
		node = NULL;
	}
}
