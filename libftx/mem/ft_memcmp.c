/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:46:44 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/20 23:46:44 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ma1;
	const unsigned char	*ma2;

	ma1 = s1;
	ma2 = s2;
	while (n--)
		if (*ma1++ != *ma2++)
			return (*--ma1 - *--ma2);
	return (0);
}
