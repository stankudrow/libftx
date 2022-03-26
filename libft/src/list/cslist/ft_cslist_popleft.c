/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_popleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:12:23 by mhorton           #+#    #+#             */
/*   Updated: 2022/03/26 11:24:57 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

t_cslist	*ft_cslist_popleft(t_cslist **lst)
{
	t_cslist	*first;
	t_cslist	*last;

	if (*lst)
	{
		first = *lst;
		if (first->next == first)
			*lst = NULL;
		else
		{
			last = ft_cslist_last(*lst);
			*lst = first->next;
			last->next = *lst;
		}
		first->next = first;
		return (first);
	}
	return (NULL);
}
