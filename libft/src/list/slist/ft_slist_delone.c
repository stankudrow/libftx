/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slist_delone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:23:30 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 19:49:02 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_slist.h"

void	ft_slist_delone(t_slist *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
