#include "push_swap.h"

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

// int	main(int ac, char **av)
// {
// 	printf("%d", check_arg(av));
// }