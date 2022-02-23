/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:58:50 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/23 21:42:55 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	const char	*start;
	const char	*end;
	size_t		span;

	while (ft_isinset(*s1, set))
		s1++;
	start = s1;
	while (*s1)
		s1++;
	s1--;
	while (ft_isinset(*s1, set) && start < s1)
		s1--;
	end = s1;
	span = end - start + 1;
	str = ft_calloc(span + 1, sizeof(char));
	if (str)
		ft_memmove(str, start, span);
	return (str);
}
// ft_strlcpy(str, start, span + 1); -> ft_memmove(str, start, span);