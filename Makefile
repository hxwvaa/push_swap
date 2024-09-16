NAME = push_swap

SRCS = ft_bzero.c ft_lst.c ft_split.c moves.c push_swap_utils.c \
       push_swap_utils2.c error.c ft_calloc.c ft_memcpy.c main.c \
       push_swap_utils1.c radix_sort.c other_sort.c moves2.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
