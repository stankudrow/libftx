/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:10:54 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/02 20:58:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

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