/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:51:47 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 21:51:49 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static long long int	ft_long_atoi(const char *str)
{
	int				sign;
	long long int	result;
	int				i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int	check_input_list(char **split_av)
{
	int			i;
	long int	n;
	long int	n_zeros;

	i = 1;
	n_zeros = 0;
	while (split_av[i])
	{
		n = ft_long_atoi(split_av[i]);
		if (!is_a_number(split_av[i]))
			return (ft_printf("Error\nArg not a number.\n"));
		if (n > INT_MAX || n < INT_MIN)
			return (ft_printf("Error\nArg[%d] value(%s) out of int range.\n",
					i, split_av[i]));
		n_zeros += arg_is_zero(split_av[i]);
		i++;
	}
	if (n_zeros > 1)
		return (ft_printf("Error\nRepeated zeros in the arg list\n"));
	if (is_repeated(split_av))
		return (ft_printf("Error\nRepeated numbers in the arg list\n"));
	return (0);
}
