/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:22:02 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:53:15 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist	*ft_dlist_new(void *data)
{
	t_dlist	*node;

	node = ft_calloc(1, sizeof(t_dlist));
	if (node)
	{
		node->data = data;
		node->prev = NULL;
		node->next = NULL;
	}
	return (node);
}
