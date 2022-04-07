/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_iter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:27 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:54:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

void	ft_cslist_iter(t_cslist *lst, void (*f)(void *))
{
	t_cslist	*head;

	head = lst;
	while (lst)
	{
		(*f)(lst->data);
		if (lst->next == head)
			break ;
		lst = lst->next;
	}
}
