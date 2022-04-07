/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_iter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:27 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:56:47 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

void	ft_cdlist_iter(t_cdlist *lst, void (*f)(void *))
{
	t_cdlist	*head;

	head = lst;
	while (lst)
	{
		(*f)(lst->data);
		if (lst->next == head)
			break ;
		lst = lst->next;
	}
}
