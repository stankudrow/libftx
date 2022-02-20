/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:58:59 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 12:58:59 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	max;

	max = -1;
	slen = ft_strlen(s);
	if (start < slen)
	{
		if (max - (size_t)start < len)
			return (NULL);
		if (slen > (start + len))
			slen = start + len;
		slen -= start;
		sub = (char *)ft_calloc(slen + 1, sizeof(char));
		if (sub)
			ft_memmove(sub, s + start, slen);
	}
	else
		sub = (char *)ft_calloc(1, sizeof(char));
	return (sub);
}
// ft_strlcpy(sub, s + start, slen + 1); -> ft_memmove(sub, s + start, slen);