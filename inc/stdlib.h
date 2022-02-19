/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:29:20 by stanislav         #+#    #+#             */
/*   Updated: 2022/02/19 14:21:58 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDL_H
# define STDL_H

# include <stddef.h> 
# include <stdlib.h>

int		ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_itoa(int n);

#endif