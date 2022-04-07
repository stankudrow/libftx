/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:24:22 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:56:26 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

t_cdlist	*ft_cdlist_map(t_cdlist *l, void *(*f)(void *), void (*d)(void *))
{
	t_cdlist	*newlst;
	t_cdlist	*head;
	t_cdlist	*node;

	newlst = NULL;
	head = l;
	while (l)
	{
		node = ft_cdlist_new((*f)(l->data));
		if (!node)
		{
			ft_cdlist_clear(&newlst, d);
			return (NULL);
		}
		ft_cdlist_add_back(&newlst, node);
		if (l->next == head)
			break ;
		l = l->next;
	}
	return (newlst);
}
