#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac == 1)
		exit(1);
	if (av[1] == NULL || !check_arg(av))
	{
		ft_putstr_fd("Error", 2);
		exit(1);
	}
    
}
