/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:37:46 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/14 21:41:55 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

char	*ft_uitoa_base(unsigned int unbr, const char *base)
{
	return (ft_ulltoa_base(unbr, base));
}
