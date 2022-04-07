/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_popleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 01:51:43 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 20:31:04 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

t_cdlist	*ft_cdlist_popleft(t_cdlist **lst)
{
	t_cdlist	*first;
	t_cdlist	*last;

	if (*lst)
	{
		first = *lst;
		if (first->prev == first && first->next == first)
			*lst = NULL;
		else
		{
			last = ft_cdlist_last(*lst);
			*lst = first->next;
			last->next = *lst;
			(*lst)->prev = last;
			first->prev = first;
			first->next = first;
		}
		return (first);
	}
	return (NULL);
}
