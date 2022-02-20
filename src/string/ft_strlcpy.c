/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:57:52 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 12:57:52 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;

	slen = 0;
	if (size)
	{
		size -= 1;
		while (src[slen] && (slen < size))
		{
			dst[slen] = src[slen];
			slen++;
		}
		dst[slen] = '\0';
	}
	while (src[slen])
		slen++;
	return (slen);
}
