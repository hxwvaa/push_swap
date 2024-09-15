#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list *clone;
	
	clone = NULL;
	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(1);
	if (av[1] == NULL || !check_arg(av))
		ft_error();
	create_stack(&a, av);
	check_dup(a);
	create_stack(&clone, av);
	sort_clone(clone);
	sorted(a, clone);
	set_index(a, clone);
	ft_free_array(clone);
	sort(a, b);
}
