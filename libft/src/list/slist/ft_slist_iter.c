/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_iter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:21:24 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:24:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_iter(t_slist *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->data);
		lst = lst->next;
	}
}
