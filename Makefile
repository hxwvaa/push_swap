NAME = push_swap

SRCS = ft_bzero.c ft_lst.c ft_split.c moves.c push_swap_utils.c \
       push_swap_utils2.c error.c ft_calloc.c ft_memcpy.c main.c \
       push_swap_utils1.c radix_sort.c sort.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Rule to create the executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Rule to compile all files
all: $(NAME)

# Rule to clean object files
clean:
	rm -f $(OBJS)

# Rule to clean all generated files
fclean: clean
	rm -f $(NAME)

# Rule to rebuild everything
re: fclean all

# Prevent relinking when nothing has changed
.PHONY: all clean fclean re
