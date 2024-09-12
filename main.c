#include "push_swap.h"

// void print_stack(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("%d, ", lst->content);
// 		lst = lst->next;
// 	}
// }


int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list *clone;

	if (ac == 1)
		exit(1);
	if (av[1] == NULL || !check_arg(av))
		ft_error();
	create_stack(&a, av);
	check_dup(a);
	create_stack(&clone, av);
	sort_clone(clone);
	set_index(); // stack_a and stack_clone
	// create moves functions
	sort(); // stack_a and stack_b || 2 numbers, 3 numbers, 4 numbers and 5 number sort and then radix sort
	//free everything at the end if needed
}
