/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_delone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:12 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:56:52 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

void	ft_cdlist_delone(t_cdlist *lst, void (*del)(void *))
{
	if (del)
		(*del)(lst->data);
	free(lst);
}
