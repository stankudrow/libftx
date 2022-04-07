/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:45:18 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 22:05:26 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_stdbool.h"

static t_bool	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (True);
		set++;
	}
	return (False);
}

char	*ft_strtrim_left(char const *s1, char const *set)
{
	char		*str;
	const char	*start;
	size_t		span;

	while (ft_isinset(*s1, set))
		s1++;
	start = s1;
	while (*s1)
		s1++;
	span = s1 - start;
	str = ft_calloc(span + 1, sizeof(char));
	if (str)
		ft_memmove(str, start, span);
	return (str);
}
