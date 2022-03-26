/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:47 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/26 11:28:04 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cslist.h"

t_cslist	*ft_cslist_last(t_cslist *lst)
{
	t_cslist	*head;

	head = lst;
	while (lst->next != head)
		lst = lst->next;
	return (lst);
}
