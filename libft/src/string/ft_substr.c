/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:53:28 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 21:53:35 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	max;

	max = -1;
	slen = ft_strlen(s);
	if (start < slen)
	{
		if (max - start < len)
			return (NULL);
		if (slen > (start + len))
			slen = start + len;
		slen -= start;
		sub = ft_calloc(slen + 1, sizeof(char));
		if (sub)
			ft_memmove(sub, s + start, slen);
	}
	else
		sub = ft_calloc(1, sizeof(char));
	return (sub);
}
