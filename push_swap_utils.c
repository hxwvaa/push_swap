#include "push_swap.h"

void	create_stack(t_list **s, char **av)
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
			ft_error();
		ft_lstadd_back(s, ft_lstnew(n));
		i++;
		free(temp);
	}
}


void swap(t_list *a, t_list *b)
{
	int temp = a->content;
	a->content = b->content;
	b->content = temp;
}

void sort_clone(t_list *lst)
{
	t_list *temp = lst;
	while (lst->next != NULL)
	{
		if(lst->content > lst->next->content)
		{
			swap(lst, lst->next);
			lst = temp;
		}
		else
			lst = lst->next;
	}
}


void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int main(void)
{
	t_list *s = ft_lstnew(4);
	ft_lstadd_back(&s, ft_lstnew(5));
	ft_lstadd_back(&s, ft_lstnew(3));
	ft_lstadd_back(&s, ft_lstnew(8));
	ft_lstadd_back(&s, ft_lstnew(9));
	ft_lstadd_back(&s, ft_lstnew(0));
	sort_stack(s);
	print_list(s);
}