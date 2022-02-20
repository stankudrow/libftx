/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:50:22 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 13:12:44 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

# include "ft_stdbool.h"
# include "ft_stdlib.h"
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# if BUFFER_SIZE < 1
#  error Invalid value (BUFFER_SIZE) for the size of a buffer
# endif

// LBS == LINE_BLOCK_SIZE
# ifndef LBS
#  define LBS 256
# endif

# if LBS < 1
#  error Invalid value (LBS) for the block size of a line
# endif

typedef struct s_fdb
{
	int				fd;
	char			buf[BUFFER_SIZE];
	ssize_t			bpos;
	ssize_t			nbytes;
	t_bool			error;
	t_bool			eof;
	struct s_fdb	*next;
}	t_fdb;

typedef struct s_line
{
	char	*buf;
	size_t	len;
	size_t	lpos;
	t_bool	error;
	t_bool	endl;
}	t_line;

char	*get_next_line(int fd);

t_line	*gnl_init_line(void);
char	gnl_pop_char(t_fdb *from);
void	gnl_push_char(t_line *to, char chr);
void	*gnl_remalloc(void *ptr, size_t os, size_t ns);
void	gnl_free_line(t_line *line);

#endif
