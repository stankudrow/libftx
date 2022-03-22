/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:57 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 20:02:00 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

t_slist	*ft_slist_last(t_slist *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
