/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putters.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:29:20 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/01 22:24:25 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUTTERS_H
# define PUTTERS_H

# include <unistd.h>

void	ft_putchar_fd(int fd, char chr);
void	ft_putnbr_base_fd(int fd, int nbr, const char *base);
void	ft_putnbr_fd(int fd, int nbr);
void	ft_putstr_fd(int fd, const char *str);
void	ft_putstrnl_fd(int fd, const char *str);

#endif