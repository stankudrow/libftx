/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:45:01 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/25 10:45:01 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

void	ft_cslist_add_back(t_cslist **lst, t_cslist *node)
{
	t_cslist	*last;

	if (*lst)
	{
		last = ft_cslist_last(*lst);
		last->next = node;
		last = ft_cslist_last(node);
		last->next = *lst;
	}
	else
	{
		last = ft_cslist_last(node);
		last->next = node;
		*lst = node;
	}
}
