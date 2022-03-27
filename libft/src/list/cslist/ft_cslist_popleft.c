/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_popleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 01:46:10 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/28 01:46:10 by stanislav        ###   ########.fr       */
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
		//first->next = first;
		return (first);
	}
	return (NULL);
}
