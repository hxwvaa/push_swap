#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}					t_list;

int					check_arg(char **av);
long				ft_atol(const char *str);
void					create_stack(t_list **s, char **av);
void				del(void *content);
void				ft_error(void);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(int content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void check_dup(t_list *s);
char	**ft_split(char const *s, char c);
int	ft_isdigit(int i);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void swap(t_list *a, t_list *b);

#endif