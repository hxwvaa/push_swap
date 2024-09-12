#include "push_swap.h"

int check_only_space(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			if (str[i] == '\0')
				return(0);
		}
		else
			break;
	}
	return(1);
}

int	add_node(t_list **s, char *arg)
{
	int		j;
	long	n;
	char	**temp;

	j = 0;
	temp = ft_split(arg, ' ');
	while (temp[j])
	{
		if (!check_only_space(temp[j]))
			return(0);
		if ((temp[j][0] == '-' || temp[j][0] == '+') && temp[j][1] == '\0')
			return (0);
		n = atol(temp[j]);
		if (n > INT_MAX || n < INT_MIN)
			return (0);
		ft_lstadd_back(s, ft_lstnew(n, 0));
		j++;
	}
	free(temp);
	return (1);
}

void	create_stack(t_list **s, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!add_node(s, av[i]))
		{
			ft_free_array(*s);
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