/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:53:16 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 21:53:16 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*cptr;
	unsigned char	chr;

	cptr = s;
	chr = c;
	while (*s)
	{
		if (*s == c)
			cptr = s;
		s++;
	}
	if (*cptr == chr)
		return ((char *)cptr);
	if (*s == chr)
		return ((char *)s);
	return (NULL);
}
