#include "push_swap.h"

void	ft_free_array(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (lst != NULL)
	{
		lst = lst->next;
		free(temp);
		temp = lst;
	}
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
