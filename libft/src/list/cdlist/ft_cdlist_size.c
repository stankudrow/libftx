/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:59:44 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/27 13:57:21 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

size_t	ft_cdlist_size(t_cdlist *lst)
{
	size_t		size;
	t_cdlist	*head;
	t_cdlist	*tail;

	size = 0;
	if (lst)
	{
		size = 1;
		head = lst;
		tail = lst->prev;
		while (head != tail)
		{
			head = head->next;
			size++;
			if (head == tail)
				break ;
			tail = tail->prev;
			size++;
		}
	}
	return (size);
}
