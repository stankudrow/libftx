/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:48:35 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/12 22:41:28 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include "ft_stdbool.h"
#include "ft_stdlib.h"

static t_bool	ft_ismemoverflow(size_t len1, size_t len2)
{
	size_t	max;

	max = -1;
	if ((len1 > max - 1) || (len2 > max - 1))
		return (True);
	if (max - (len1 + 1) < len2)
		return (True);
	return (False);
}

void	*ft_memjoin(const void *dst, size_t m, const void *src, size_t n)
{
	void	*newmem;

	if (ft_ismemoverflow(m, n))
		return (NULL);
	newmem = ft_calloc(m + n, sizeof(unsigned char));
	if (!newmem)
		return (NULL);
	ft_memcpy(newmem, dst, m);
	ft_memcpy(newmem + m, src, n);
	return (newmem);
}
