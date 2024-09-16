#include "push_swap.h"

void	three_sort(t_list **a, t_list **b)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first < second && first < third)
	{
		pb(a, b);
		sa(a);
		pa(a, b);
	}
	else if (first > second && first < third)
		sa(a);
	else if (first < second && first > third)
		rra(a);
	else if (second < first && second > third)
	{
		ra(a);
		sa(a);
	}
	else if (first > second && first > third)
		ra(a);
}

void	four_sort(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((*a)->index == 0)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
		i++;
	}
	three_sort(a, b);
	pa(a, b);
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
		three_sort(&a, &b);
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
