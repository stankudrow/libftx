/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:32:20 by stanislav         #+#    #+#             */
/*   Updated: 2021/10/18 22:32:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

static int	ft_isaf_up(int c)
{
	return (c >= 'A' && c <= 'F');
}

static int	ft_isaf_low(int c)
{
	return (c >= 'a' && c <= 'f');
}

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || ft_isaf_up(c) || ft_isaf_low(c));
}
