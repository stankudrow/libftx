/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:39:45 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/14 21:44:35 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_stdbool.h"
#include "ft_stdlib.h"
#include "ft_string.h"

#define ULL unsigned long long

static t_bool	ft_is_valid_base(const char *base)
{
	size_t	blen;
	size_t	bci;
	size_t	bcj;

	blen = ft_strlen(base);
	if (blen < 2 || blen > 36)
		return (False);
	bci = 0;
	while (bci < blen)
	{
		if (!ft_isalnum(base[bci]))
			return (False);
		bcj = 0;
		while (bcj < bci)
		{
			if (base[bcj] == base[bci])
				return (False);
			bcj++;
		}
		bci++;
	}
	return (True);
}

/* base should be checked before and has no 0, 1 values */
static ULL	ft_get_numlen(ULL unbr, int nbase)
{
	ULL	len;

	len = 0;
	if (!unbr)
		len++;
	while (unbr)
	{
		unbr /= nbase;
		len++;
	}
	return (len);
}

static char	*ft_init_ulltoa(ULL unbr, const char *base, ULL *nbase)
{
	char	*str;
	ULL		unbrlen;

	if (ft_is_valid_base(base))
	{
		*nbase = ft_strlen(base);
		unbrlen = ft_get_numlen(unbr, *nbase);
		str = ft_calloc(unbrlen + 1, sizeof(char));
		if (str)
			return (str);
	}
	return (NULL);
}

static void	ft_strrev(char *str)
{
	char	*left;
	char	tmp;

	left = str;
	while (*str)
		str++;
	while (left < --str)
	{
		tmp = *left;
		*left++ = *str;
		*str = tmp;
	}
}

/* thanks to calloc, no need to NULL-terminate an alloc'd string */
char	*ft_ulltoa_base(ULL unbr, const char *base)
{
	char	*str;
	ULL		pos;
	ULL		nbase;

	str = ft_init_ulltoa(unbr, base, &nbase);
	if (!str)
		return (NULL);
	pos = 0;
	while (unbr)
	{
		str[pos++] = base[unbr % nbase];
		unbr /= nbase;
	}
	if (!(unbr || pos))
		str[pos++] = base[0];
	ft_strrev(str);
	return (str);
}
