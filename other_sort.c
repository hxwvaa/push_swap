#include "push_swap.h"

void	three_sort(t_list *a, t_list *b, int size)
{
	int	first;
	int	second;
	int	third;

	first = a->index;
	second = a->next->index;
	third = a->next->next->index;
	if (first < second && first < third)
	{
		pb(&a, &b);
		sa(&a);
		pa(&a, &b);
	}
	else if (first > second && first < third)
		sa(&a);
    else if (first < second && first > third)
    {
        ra(&a);
        ra(&a);
    }
    else if (second < first && second > third)
    {
        ra(&a);
        sa(&a);
    }
    else if(first > second && first > third)
        ra(&a);
}

void	four_sort(t_list *a, t_list *b, int size)
{
}

void	five_sort(t_list *a, t_list *b, int size)
{
}
