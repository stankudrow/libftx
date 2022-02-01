/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:47:16 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/20 23:47:16 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ma;
	unsigned char	chr;

	ma = s;
	chr = c;
	while (n--)
		*ma++ = chr;
	return (s);
}
