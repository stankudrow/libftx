/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:58:33 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 12:58:33 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j) < n)
			j++;
		if ((i + j) > n)
			return (NULL);
		if (!little[j])
			return ((char *)&big[i]);
		if (!big[i + j])
			return (NULL);
		i++;
	}
	return (NULL);
}
