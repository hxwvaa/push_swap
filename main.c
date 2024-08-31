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

	if (ac == 1)
		exit(1);
	if (av[1] == NULL || !check_arg(av))
	{
		ft_putstr_fd("Error", 2);
		exit(1);
	}
	if (!create_stack(&a, av))
		exit(1);
	ft_lstclear(&a, &del);
	print_stack(a);

}
