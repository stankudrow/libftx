NAME := libft.a

SRC_D := src
INC_D := inc

ctype_d := $(SRC_D)/ctype
ctype_c := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_iscntrl.c \
ft_isdigit.c ft_isdigit.c ft_isgraph.c ft_islower.c ft_isprint.c ft_ispunct.c \
ft_isspace.c ft_isupper.c ft_isxdigit.c ft_tolower.c ft_toupper.c
ctype_c := $(addprefix $(ctype_d)/, $(ctype_c))
ctype_h := $(INC_D)/ctype.h

gnl_d := $(SRC_D)/get_next_line
gnl_c := get_next_line.c get_next_line_utils.c
gnl_c := $(addprefix $(gnl_d)/, $(gnl_c))
gnl_h := $(INC_D)/get_next_line.h

list_d := $(SRC_D)/list
slist_d := $(list_d)/slist
slist_c := ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
slist_c := $(addprefix $(slist_d)/, $(slist_c))
slist_h := $(INC_D)/list.h

mem_d := $(SRC_D)/mem
mem_c := ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
mem_c := $(addprefix $(mem_d)/, $(mem_c))
mem_h := $(INC_D)/mem.h

putters_d := $(SRC_D)/putters
putters_c := ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_base_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c
putters_c := $(addprefix $(putters_d)/, $(putters_c))
putters_h := $(INC_D)/putters.h

stdl_d := $(SRC_D)/stdlib
stdl_c := ft_atoi.c ft_calloc.c ft_itoa.c
stdl_c := $(addprefix $(stdl_d)/, $(stdl_c))
stdl_h := $(INC_D)/stdlib.h

string_d := $(SRC_D)/string
string_c := ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
string_c := $(addprefix $(string_d)/, $(string_c))
string_h := $(INC_D)/string.h

# Files in total
HEADERS := $(ctype_h) $(gnl_h) $(slist_h) $(mem_h) $(puts_h) $(stdlib_h) $(string_h)
SOURCES := $(ctype_c) $(gnl_c) $(slist_c) $(mem_c) $(puts_c) $(stdlib_c) $(string_c)
OBJECTS := $(SOURCES:.c=.o)

# Compilation flags
CC := cc
CFLAGS := -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(INC_D) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all