/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:24:22 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/25 12:35:11 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"
#include "ft_stdbool.h"

t_cslist	*ft_cslist_map(t_cslist *l, void *(*f)(void *), void (*d)(void *))
{
	t_cslist	*newlst;
	t_cslist	*head;
	t_cslist	*node;

	newlst = NULL;
	head = l;
	while (l)
	{
		node = ft_cslist_new((*f)(l->content));
		if (!node)
		{
			ft_cslist_clear(&newlst, d);
			return (NULL);
		}
		ft_cslist_add_back(&newlst, node);
		if (l->next == head)
			break ;
		l = l->next;
	}
	return (newlst);
}
