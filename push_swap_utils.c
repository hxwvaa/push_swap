#include "push_swap.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
void	free_split(char **str_arr)
{
	int	i;

	i = 0;
	while (str_arr[i] != NULL)
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
}

long	ft_atol(const char *str)
{
	unsigned long long	nb;
	int					sign;

	sign = 1;
	nb = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		if (sign == -1 && nb >= LLONG_MAX)
			return (2147483649);
		if (nb >= LLONG_MAX)
			return (2147483649);
		str++;
	}
	return (sign * nb);
}

int	check_arg(char **av)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	flag = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) || (av[i][j] == '-' && (av[i][j - 1] == ' '
						|| j == 0)) || (av[i][j] == '+' && (av[i][j - 1] == ' '
						|| j == 0)) || av[i][j] == ' ')
				flag = 1;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (flag);
}

void check_dup(t_list *s)
{
	t_list *orig;

	orig = s;
	while (s != NULL)
	{
		t_list *temp = s->next;
		while (temp != NULL)
		{
			if (s->content == temp->content)
			{
				ft_free_array(orig);
				ft_error();
			}
			temp = temp->next;
		}
		s = s->next;
	}
}

// int main(void)
// {
// 	t_list *s = ft_lstnew(4);
// 	ft_lstadd_back(&s, ft_lstnew(5));
// 	ft_lstadd_back(&s, ft_lstnew(3));
// 	ft_lstadd_back(&s, ft_lstnew(8));
// 	ft_lstadd_back(&s, ft_lstnew(9));
// 	ft_lstadd_back(&s, ft_lstnew(0));
// 	check_dup(s);
// }