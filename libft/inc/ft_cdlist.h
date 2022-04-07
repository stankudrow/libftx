/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 11:54:11 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/07 19:57:29 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CDLIST_H
# define FT_CDLIST_H

# include "ft_stdlib.h"

typedef struct s_cdlist
{
	void			*data;
	struct s_cdlist	*prev;
	struct s_cdlist	*next;
}	t_cdlist;

void		ft_cdlist_add_back(t_cdlist **lst, t_cdlist *node);
void		ft_cdlist_add_front(t_cdlist **lst, t_cdlist *node);
void		ft_cdlist_clear(t_cdlist **lst, void (*del)(void *));
void		ft_cdlist_delone(t_cdlist *lst, void (*del)(void *));
void		ft_cdlist_iter(t_cdlist *lst, void (*f)(void *));
t_cdlist	*ft_cdlist_last(t_cdlist *lst);
t_cdlist	*ft_cdlist_map(t_cdlist *l, void *(*f)(void *), void (*d)(void *));
t_cdlist	*ft_cdlist_new(void *data);
t_cdlist	*ft_cdlist_pop(t_cdlist **lst);
t_cdlist	*ft_cdlist_popleft(t_cdlist **lst);
void		ft_cdlist_reverse(t_cdlist **lst);
size_t		ft_cdlist_size(t_cdlist *lst);

#endif