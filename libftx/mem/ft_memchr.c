/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:18:07 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/20 23:45:11 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ma;
	unsigned char		chr;

	ma = s;
	chr = c;
	while (n--)
		if (*ma++ == chr)
			return ((void *)--ma);
	return (NULL);
}
