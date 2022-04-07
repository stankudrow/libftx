/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:51:47 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:56:17 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

t_cdlist	*ft_cdlist_last(t_cdlist *lst)
{
	if (lst)
		return (lst->prev);
	return (lst);
}
