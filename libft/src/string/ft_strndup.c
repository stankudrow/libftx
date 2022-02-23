/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:57:05 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/23 21:37:21 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strndup(const char *s, size_t n)
{
	void	*str;

	if (n == (size_t)-1)
		return (NULL);
	str = ft_calloc(n + 1, sizeof(char));
	if (str)
		ft_memmove(str, s, n);
	return (str);
}
// ft_strlcpy(str, s, len + 1); -> ft_memmove(str, s, len + 1);