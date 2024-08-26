#include "push_swap.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbasheer <hbasheer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:14:27 by hbasheer          #+#    #+#             */
/*   Updated: 2024/06/27 18:53:05 by hbasheer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			return (0);
		if (nb >= LLONG_MAX)
			return (-1);
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

// int	main(int ac, char **av)
// {
// 	printf("%d", check_arg(av));
// }