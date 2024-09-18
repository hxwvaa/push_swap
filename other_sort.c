/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasheer <hbasheer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:39:10 by hbasheer          #+#    #+#             */
/*   Updated: 2024/09/18 09:40:08 by hbasheer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_list **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->index;
	s = (*a)->next->index;
	t = (*a)->next->next->index;
	if (f == 0 && s == 2 && t == 1)
	{
		rra(a);
		sa(a);
	}
	else if (f == 1 && s == 0 && t == 2)
		sa(a);
	else if (f == 1 && s == 2 && t == 0)
		rra(a);
	else if (f == 2 && s == 1 && t == 0)
	{
		ra(a);
		sa(a);
	}
	else if (f == 2 && s == 0 && t == 1)
		ra(a);
}

void	four_sort(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((*a)->index == 3)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
		i++;
	}
	three_sort(a);
	pa(a, b);
	ra(a);
}

void	five_sort(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if ((*a)->index == 4)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
		i++;
	}
	four_sort(a, b);
	pa(a, b);
	ra(a);
}

void	sort(t_list *a, t_list *b)
{
	int	size;

	size = ft_lstsize(a);
	if (size == 2)
		sa(&a);
	else if (size == 3)
		three_sort(&a);
	else if (size == 4)
		four_sort(&a, &b);
	else if (size == 5)
		five_sort(&a, &b);
	else
	{
		radix(&a, &b, size);
	}
	ft_free_array(a);
}
