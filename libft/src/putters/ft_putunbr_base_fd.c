/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:53:45 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/23 18:55:43 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_putters.h"
#include "ft_stdbool.h"
#include "ft_string.h"

#define ULL unsigned long long int
#define UC unsigned char

static t_bool	ft_contains_unique_chars(const char *base)
{
	size_t	blen;
	size_t	bci;
	size_t	bcj;

	blen = ft_strlen(base);
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

static void	ft_putunbr_nbase_fd(int fd, ULL nbr, const char *bset, UC bnum)
{
	if (nbr >= bnum)
		ft_putunbr_nbase_fd(fd, nbr / bnum, bset, bnum);
	ft_putchar_fd(fd, bset[nbr % bnum]);
}

void	ft_putunbr_base_fd(int fd, ULL nbr, const char *base)
{
	size_t	baselen;

	baselen = ft_strlen(base);
	if (baselen < 2 || baselen > 36)
		return ;
	if (ft_contains_unique_chars(base))
		ft_putunbr_nbase_fd(fd, nbr, base, baselen);
}
