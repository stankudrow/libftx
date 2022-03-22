#ifndef FT_STACK_H
# define FT_STACK_H

# include "ft_slist.h"

typedef t_slist	t_stack;

/*
void	ft_slstadd_back(t_slist **lst, t_slist *node);
void	ft_slstadd_front(t_slist **lst, t_slist *node);
void	ft_slstclear(t_slist **lst, void (*del)(void *));
void	ft_slstdelone(t_slist *lst, void (*del)(void *));
void	ft_slstiter(t_slist *lst, void (*f)(void *));
t_slist	*ft_slstlast(t_slist *lst);
t_slist	*ft_slstmap(t_slist *lst, void *(*f)(void *), void (*del)(void *));
t_slist	*ft_slstnew(void *content);
*/
void	ft_stack_delone(t_stack *stk, void (*del)(void *));
t_stack	*ft_stack_new(void *content);
t_stack	*ft_stack_peek(t_stack *stk);
t_stack	*ft_stack_pop(t_stack **stk);
void	ft_stack_push(t_stack **stk, t_stack *node);
size_t	ft_stack_size(t_stack *stk);

#endif