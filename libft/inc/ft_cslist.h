/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cslist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:40:59 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:54:03 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CSLIST_H
# define FT_CSLIST_H

# include "ft_stdlib.h"

typedef struct s_cslist
{
	void			*data;
	struct s_cslist	*next;
}	t_cslist;

void		ft_cslist_add_back(t_cslist **lst, t_cslist *node);
void		ft_cslist_add_front(t_cslist **lst, t_cslist *node);
void		ft_cslist_clear(t_cslist **lst, void (*del)(void *));
void		ft_cslist_delone(t_cslist *lst, void (*del)(void *));
void		ft_cslist_iter(t_cslist *lst, void (*f)(void *));
t_cslist	*ft_cslist_last(t_cslist *lst);
t_cslist	*ft_cslist_map(t_cslist *l, void *(*f)(void *), void (*d)(void *));
t_cslist	*ft_cslist_new(void *data);
t_cslist	*ft_cslist_pop(t_cslist **lst);
t_cslist	*ft_cslist_popleft(t_cslist **lst);
void		ft_cslist_reverse(t_cslist **lst);
size_t		ft_cslist_size(t_cslist *lst);

#endif