/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:52:12 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 12:52:13 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

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
