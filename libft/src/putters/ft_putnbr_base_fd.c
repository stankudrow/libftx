/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:11:14 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/23 18:52:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_putters.h"
#include "ft_stdbool.h"
#include "ft_string.h"

#define LL long long int

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

static void	ft_putnbr_nbase_fd(int fd, LL nbr, const char *bset, char bnum)
{
	if (nbr < 0)
	{
		ft_putchar_fd(fd, '-');
		if (nbr <= -bnum)
			ft_putnbr_nbase_fd(fd, nbr / -bnum, bset, bnum);
		ft_putchar_fd(fd, bset[-(nbr % bnum)]);
	}
	else
	{
		if (nbr >= bnum)
			ft_putnbr_nbase_fd(fd, nbr / bnum, bset, bnum);
		ft_putchar_fd(fd, bset[nbr % bnum]);
	}
}

void	ft_putnbr_base_fd(int fd, LL nbr, const char *base)
{
	size_t	baselen;

	baselen = ft_strlen(base);
	if (baselen < 2 || baselen > 36)
		return ;
	if (ft_contains_unique_chars(base))
		ft_putnbr_nbase_fd(fd, nbr, base, baselen);
}
