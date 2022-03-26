/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_pop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:12:23 by mhorton           #+#    #+#             */
/*   Updated: 2022/03/26 11:43:00 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

t_cslist	*ft_cslist_pop(t_cslist **lst)
{
	t_cslist	*prev;
	t_cslist	*last;

	if (*lst)
	{
		prev = NULL;
		last = *lst;
		while (last->next != *lst)
		{
			prev = last;
			last = last->next;
		}
		if (prev == NULL)
			*lst = NULL;
		else
		{
			prev->next = *lst;
			last->next = last;
		}
		return (last);
	}
	return (NULL);
}
