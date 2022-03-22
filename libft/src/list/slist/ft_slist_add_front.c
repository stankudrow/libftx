/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:22:39 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 19:48:50 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_add_front(t_slist **lst, t_slist *node)
{
	if (*lst)
		node->next = *lst;
	*lst = node;
}
