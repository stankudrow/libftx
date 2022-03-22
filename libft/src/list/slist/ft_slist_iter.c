/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_iter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:43 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 19:56:08 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_iter(t_slist *lst, void (*f)(void *))
{
	(void)(*lst);
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
