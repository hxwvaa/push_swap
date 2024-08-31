#include "push_swap.h"

int	create_stack(t_list **s, char **av)
{
	long n;
	int i;
	char **temp;

	i = 1;

	*s = NULL;
	while (av[i])
	{
		temp = ft_split(av[i], ' ');
		n = atol(temp[0]);
		if (n > INT_MAX || n < INT_MIN)
			return (0);
		ft_lstadd_back(s, ft_lstnew(n));
		i++;
		free(temp);
	}
	return(1);
}
