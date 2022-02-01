/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:52:09 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/01 19:52:09 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putters.h"

void	ft_putstrnl_fd(int fd, const char *str)
{
	ft_putstr_fd(fd, str);
	ft_putstr_fd(fd, "\n");
}
