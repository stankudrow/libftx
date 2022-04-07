/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:00:07 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/28 13:11:06 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cdlist.h"

void	ft_cdlist_reverse(t_cdlist **lst)
{
	t_cdlist	*new;
	t_cdlist	*node;

	new = NULL;
	while (*lst)
	{
		node = ft_cdlist_popleft(lst);
		ft_cdlist_add_front(&new, node);
	}
	*lst = new;
}
