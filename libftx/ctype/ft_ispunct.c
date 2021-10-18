/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:12:15 by stanislav         #+#    #+#             */
/*   Updated: 2021/10/18 22:12:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"

int	ft_ispunct(int c)
{
	return (ft_isprint(c) && !(ft_isalnum(c) && ft_isspace(c)));
}
