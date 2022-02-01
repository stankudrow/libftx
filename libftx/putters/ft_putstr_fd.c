/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 06:51:19 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/01 19:49:25 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putters.h"
#include "string.h"

void	ft_putstr_fd(int fd, const char *str)
{
	write(fd, str, ft_strlen(str));
}
