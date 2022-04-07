/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:52:30 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:51:08 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

t_cslist	*ft_cslist_new(void *data)
{
	t_cslist	*node;

	node = ft_calloc(1, sizeof(t_cslist));
	if (node)
	{
		node->data = data;
		node->next = node;
	}
	return (node);
}
