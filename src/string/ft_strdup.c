/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:57:05 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 12:57:06 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *s)
{
	void	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (slen == (size_t)-1)
		return (NULL);
	str = ft_calloc(slen + 1, sizeof(char));
	if (str)
		ft_memmove(str, s, slen + 1);
	return (str);
}
// ft_strlcpy(str, s, len + 1); -> ft_memmove(str, s, len + 1);