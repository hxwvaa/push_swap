/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasheer <hbasheer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:17 by hbasheer          #+#    #+#             */
/*   Updated: 2024/09/17 19:05:28 by hbasheer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list	*clone;

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
