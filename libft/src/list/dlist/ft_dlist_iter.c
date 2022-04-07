/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_iter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:22:35 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:54:22 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	ft_dlist_iter(t_dlist *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->data);
		lst = lst->next;
	}
}
