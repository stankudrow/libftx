# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stanislav <student.21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 00:17:09 by stanislav         #+#    #+#              #
#    Updated: 2022/04/18 01:05:51 by stanislav        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

INC_D := inc
SRC_D := src
OBJ_D := obj

ctype_d := ctype
ctype_c := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_iscntrl.c \
ft_isdigit.c ft_isdigit.c ft_isgraph.c ft_islower.c ft_isprint.c ft_ispunct.c \
ft_isspace.c ft_isupper.c ft_isxdigit.c ft_tolower.c ft_toupper.c
ctype_c := $(addprefix $(ctype_d)/, $(ctype_c))
ctype_h := ft_ctype.h

get_next_line_d := get_next_line
get_next_line_c := get_next_line.c get_next_line_utils.c
get_next_line_c := $(addprefix $(get_next_line_d)/, $(get_next_line_c))
get_next_line_h := get_next_line.h

# lists start
list_d := list

cdlist_d := $(list_d)/cdlist
cdlist_c := ft_cdlist_add_back.c ft_cdlist_add_front.c ft_cdlist_clear.c \
ft_cdlist_delone.c ft_cdlist_iter.c ft_cdlist_last.c ft_cdlist_map.c \
ft_cdlist_new.c ft_cdlist_pop.c ft_cdlist_popleft.c ft_cdlist_reverse.c ft_cdlist_size.c
cdlist_c := $(addprefix $(cdlist_d)/, $(cdlist_c))
cdlist_h := ft_cdlist.h

cslist_d := $(list_d)/cslist
cslist_c := ft_cslist_add_back.c ft_cslist_add_front.c ft_cslist_clear.c \
ft_cslist_delone.c ft_cslist_iter.c ft_cslist_last.c ft_cslist_map.c \
ft_cslist_new.c ft_cslist_pop.c ft_cslist_popleft.c ft_cslist_reverse.c ft_cslist_size.c
cslist_c := $(addprefix $(cslist_d)/, $(cslist_c))
cslist_h := ft_cslist.h

dlist_d := $(list_d)/dlist
dlist_c := ft_dlist_add_back.c ft_dlist_add_front.c ft_dlist_clear.c \
ft_dlist_delone.c ft_dlist_iter.c ft_dlist_last.c ft_dlist_map.c \
ft_dlist_new.c ft_dlist_pop.c ft_dlist_popleft.c ft_dlist_reverse.c ft_dlist_size.c
dlist_c := $(addprefix $(dlist_d)/, $(dlist_c))
dlist_h := ft_dlist.h

slist_d := $(list_d)/slist
slist_c := ft_slist_add_back.c ft_slist_add_front.c ft_slist_clear.c \
ft_slist_delone.c ft_slist_iter.c ft_slist_last.c ft_slist_map.c \
ft_slist_new.c ft_slist_pop.c ft_slist_popleft.c ft_slist_reverse.c ft_slist_size.c
slist_c := $(addprefix $(slist_d)/, $(slist_c))
slist_h := ft_slist.h

lists_c := $(cdlist_c) $(cslist_c) $(dlist_c) $(slist_c)

# lists end

mem_d := mem
mem_c := ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memjoin.c ft_memmove.c ft_memrchr.c ft_memset.c
mem_c := $(addprefix $(mem_d)/, $(mem_c))
mem_h := ft_mem.h

putters_d := putters
putters_c := ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_base_fd.c ft_putnbr_fd.c ft_putunbr_base_fd.c ft_putunbr_fd.c
putters_c := $(addprefix $(putters_d)/, $(putters_c))
putters_h := ft_putters.h

stack_d := stack
stack_c := ft_stack_clear.c ft_stack_delone.c ft_stack_new.c \
ft_stack_peek.c ft_stack_pop.c ft_stack_push.c ft_stack_size.c
stack_c := $(addprefix $(stack_d)/, $(stack_c))
stack_h := ft_stack.h

stdbool_h := ft_stdbool.h

stdlib_d := stdlib
stdlib_c := ft_atoi_base.c ft_atoi.c ft_atoui_base.c ft_atoui.c \
ft_calloc.c ft_itoa_base.c ft_itoa.c ft_lltoa_base.c ft_lltoa.c \
ft_ltoa_base.c ft_ltoa.c ft_uitoa_base.c ft_uitoa.c \
ft_ulltoa_base.c ft_ulltoa.c ft_ultoa_base.c ft_ultoa.c
stdlib_c := $(addprefix $(stdlib_d)/, $(stdlib_c))
stdlib_h := ft_stdlib.h

string_d := string
string_c := ft_split.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncat.c \
ft_strncmp.c ft_strndup.c ft_strnstr.c ft_strrchr.c ft_strspn.c ft_strstr.c \
ft_strtrim.c ft_strtrim_left.c ft_strtrim_right.c ft_substr.c
string_c := $(addprefix $(string_d)/, $(string_c))
string_h := ft_string.h

# Files
HEADERS := $(addprefix $(INC_D)/, $(ctype_h) $(get_next_line_h) $(mem_h) $(putters_h) \
$(slist_h) $(stack_h) $(stdbool_h) $(stdlib_h) $(string_h))
SOURCES := $(ctype_c) $(get_next_line_c) $(mem_c) $(putters_c) $(lists_c) \
$(stack_c) $(stdlib_c) $(string_c)
OBJECTS := $(addprefix $(OBJ_D)/, $(SOURCES:.c=.o))

# Compilation
CC := cc
CFLAGS := -Wall -Werror -Wextra -MMD -g

# Commands
RM := rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

$(OBJ_D)/%.o: $(SRC_D)/%.c $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I$(INC_D) -c $< -o $@

clean:
	@$(RM) $(OBJ_D)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

-include $(OBJECTS:.o=.d)