/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:52:30 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/26 10:45:06 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

t_cslist	*ft_cslist_new(void *content)
{
	t_cslist	*node;

	node = ft_calloc(1, sizeof(t_cslist));
	if (node)
	{
		node->content = content;
		node->next = node;
	}
	return (node);
}
