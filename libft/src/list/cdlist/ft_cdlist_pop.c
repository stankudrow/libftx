/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_pop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:31:22 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 20:42:43 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

t_cdlist	*ft_cdlist_pop(t_cdlist **lst)
{
	t_cdlist	*last;

	if (*lst)
	{
		last = ft_cdlist_last(*lst);
		if (last == *lst)
			*lst = NULL;
		else
		{
			last->prev->next = *lst;
			(*lst)->prev = last->prev;
			last->prev = last;
			last->next = last;
		}
		return (last);
	}
	return (NULL);
}
