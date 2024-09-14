#include "push_swap.h"

int	add_node(t_list **s, char *arg)
{
	int		j;
	long	n;
	char	**temp;

	j = 0;
	temp = ft_split(arg, ' ');
	if(!temp)
		return(0);
	while (temp[j])
	{
		if ((temp[j][0] == '-' || temp[j][0] == '+') && temp[j][1] == '\0')
			return(free_split(temp), 0);
		n = ft_atol(temp[j]);
		if (n > INT_MAX || n < INT_MIN)
			return(free_split(temp), 0);
		ft_lstadd_back(s, ft_lstnew(n, 0));
		j++;
	}
	free_split(temp);
	return (1);
}

void	create_stack(t_list **s, char **av)
{
	int	i;
	t_list *orig_s;

	i = 1;
	orig_s = *s;
	while (av[i])
	{
		if (!add_node(s, av[i]))
		{
			ft_free_array(orig_s);
			ft_error();
		}
		i++;
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
	int i;

	if (!lst)
		exit(1);
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
	lst = temp;
	i = 0;
	while(lst != NULL)
	{
		lst->index = i;
		i++;
		lst = lst->next;
	}
}


// void print_list(t_list *lst)
// {
// 	while(lst)
// 	{
// 		printf("%d, %d \n", lst->content, lst->index);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
// 	t_list *s = ft_lstnew(4);
// 	ft_lstadd_back(&s, ft_lstnew(5));
// 	ft_lstadd_back(&s, ft_lstnew(3));
// 	ft_lstadd_back(&s, ft_lstnew(8));
// 	ft_lstadd_back(&s, ft_lstnew(9));
// 	ft_lstadd_back(&s, ft_lstnew(0));
// 	sort_clone(s);
// 	print_list(s);
// }