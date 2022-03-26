/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:38:38 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/26 11:27:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

size_t	ft_cslist_size(t_cslist *lst)
{
	size_t		size;
	t_cslist	*head;

	size = 0;
	head = lst;
	while (lst)
	{
		size++;
		if (lst->next == head)
			break ;
		lst = lst->next;
	}
	return (size);
}
