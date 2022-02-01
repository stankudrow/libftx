/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:47:10 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/20 23:47:10 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src)
		return (dst);
	dest = dst;
	source = src;
	if (src < dst)
		while (n--)
			dest[n] = source[n];
	if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}
