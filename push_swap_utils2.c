#include "push_swap.h"

void	set_index(t_list *a, t_list *c)
{
	t_list	*temp;

	temp = a;
	while (c != NULL)
	{
		while (a != NULL)
		{
			if (c->content == a->content)
			{
				a->index = c->index;
				break ;
			}
			a = a->next;
		}
		a = temp;
		c = c->next;
	}
}

void	sorted(t_list *a, t_list *c)
{
	t_list	*temp;
	t_list	*temp1;

	temp = a;
	temp1 = c;
	while (a != NULL)
	{
		if (c->content == a->content)
		{
			a = a->next;
			c = c->next;
		}
		else
			return ;
	}
	ft_free_array(temp);
	ft_free_array(temp1);
	exit(1);
}
