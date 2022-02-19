/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:11:14 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/19 14:05:33 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "putters.h"
#include "stdbool.h"
#include "string.h"

static bool	ft_is_valid_base(const char *base)
{
	size_t	blen;
	size_t	bci;
	size_t	bcj;

	blen = ft_strlen(base);
	if (blen < 2 || blen > 36)
		return (false);
	bci = 0;
	while (bci < blen)
	{
		if (!ft_isalnum(base[bci]))
			return (false);
		bcj = 0;
		while (bcj < bci)
		{
			if (base[bcj] == base[bci])
				return (false);
			bcj++;
		}
		bci++;
	}
	return (true);
}

static void	ft_putnbr_nbase_fd(int fd, int nbr, const char *bset, int bnum)
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

void	ft_putnbr_base_fd(int fd, int nbr, const char *base)
{
	if (ft_is_valid_base(base))
		ft_putnbr_nbase_fd(fd, nbr, base, ft_strlen(base));
}
