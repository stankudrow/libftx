/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:42:24 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/08 00:15:26 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim_right(char const *s1, char const *set)
{
	char		*str;
	const char	*start;
	const char	*end;
	size_t		span;

	start = s1;
	while (*s1)
		s1++;
	if (s1 > start)
		s1--;
	while (ft_strchr(set, *s1) && s1 > start)
		s1--;
	if (!ft_strchr(set, *s1))
		s1++;
	end = s1;
	span = end - start;
	str = ft_calloc(span + 1, sizeof(char));
	if (str)
		ft_memmove(str, start, span);
	return (str);
}
