/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:08:01 by stanislav         #+#    #+#             */
/*   Updated: 2021/10/18 22:08:13 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

int	ft_iscntrl(int c)
{
	return (!ft_isprint(c));
}
