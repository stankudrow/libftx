/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:40:56 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/14 21:47:18 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

# define UI unsigned int

int		ft_atoi_base(const char *nptr, const char *base);
int		ft_atoi(const char *nptr);
UI		ft_atoui_base(const char *nptr, const char *base);
UI		ft_atoui(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_itoa_base(int nbr, const char *base);
char	*ft_itoa(int n);
char	*ft_uitoa_base(unsigned int unbr, const char *base);
char	*ft_uitoa(unsigned int unbr);
char	*ft_ulltoa_base(unsigned long long unbr, const char *base);
char	*ft_ulltoa(unsigned long long unbr);
char	*ft_ultoa_base(unsigned long unbr, const char *base);
char	*ft_ultoa(unsigned long unbr);

#endif