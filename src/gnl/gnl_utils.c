/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorton <mhorton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:06:46 by mhorton           #+#    #+#             */
/*   Updated: 2022/02/20 13:06:47 by mhorton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gnl.h"

t_line	*gnl_init_line(void)
{
	t_line	*line;
	char	*buf;

	line = malloc(sizeof(t_line));
	if (line)
	{
		buf = malloc(LBS);
		if (buf)
		{
			line->buf = buf;
			line->len = LBS;
			line->lpos = 0;
			line->endl = false;
			line->error = false;
			return (line);
		}
		free(line);
	}
	return (NULL);
}

char	gnl_pop_char(t_fdb *from)
{
	if (from->bpos == from->nbytes)
	{
		from->bpos = 0;
		from->nbytes = read(from->fd, from->buf, BUFFER_SIZE);
		if (from->nbytes <= 0)
		{
			if (from->nbytes)
				from->error = true;
			else
				from->eof = true;
			return (from->nbytes);
		}
	}
	return (from->buf[from->bpos++]);
}

void	gnl_push_char(t_line *to, char chr)
{
	char	*oldbuf;

	if (to->lpos == to->len)
	{
		oldbuf = to->buf;
		to->buf = gnl_remalloc(to->buf, to->len, to->len + LBS);
		free(oldbuf);
		if (!to->buf)
		{
			to->error = true;
			return ;
		}
		to->len += LBS;
	}
	to->buf[to->lpos++] = chr;
	if (chr == '\n' || (chr == '\0' && to->lpos != 1))
		to->endl = true;
}

// realloc + memmove (with memcpy)
void	*gnl_remalloc(void *ptr, size_t os, size_t ns)
{
	void			*newptr;
	unsigned char	*dst;
	unsigned char	*src;

	newptr = malloc(ns);
	if (!(ptr && newptr))
		return (newptr);
	dst = newptr;
	src = ptr;
	if (src < dst)
		while (os--)
			dst[os] = src[os];
	if (src > dst)
		while (os--)
			*dst++ = *src++;
	return (newptr);
}

void	gnl_free_line(t_line *line)
{
	if (line)
	{
		if (line->buf)
			free(line->buf);
		free(line);
	}
}
