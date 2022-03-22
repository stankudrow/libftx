/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:42:07 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/22 22:11:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include "ft_slist.h"

typedef t_slist	t_stack;

void	ft_stack_clear(t_stack **stk, void (*del)(void *));
void	ft_stack_delone(t_stack *stk, void (*del)(void *));
t_stack	*ft_stack_new(void *content);
t_stack	*ft_stack_peek(t_stack *stk);
t_stack	*ft_stack_pop(t_stack **stk);
void	ft_stack_push(t_stack **stk, t_stack *node);
size_t	ft_stack_size(t_stack *stk);

#endif