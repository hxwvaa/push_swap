#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

int	check_arg(char **av);
long	ft_atol(const char *str);
int	create_stack(t_list **s, char **av);
void del(void *content);

#endif