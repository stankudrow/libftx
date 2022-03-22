/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:22:47 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 19:50:35 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_add_back(t_slist **lst, t_slist *node)
{
	t_slist	*last;

	if (*lst)
	{
		last = ft_slist_last(*lst);
		last->next = node;
	}
	else
		*lst = node;
}
