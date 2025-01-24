/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_str_cmp_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:35:44 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 21:35:47 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	skip_push_sign(const char *str)
{
	if (str[0] == '+')
		return (1);
	return (0);
}

static int	is_negative(const char *str, int start_pos)
{
	return (str[start_pos] == '-');
}

static const char	*skip_leading_zeros(const char *str)
{
	while (*str == '0' && *(str + 1) != '\0')
		str++;
	return (str);
}

static int	compare_digits(const char *num1, const char *num2)
{
	while (*num1 != '\0' && *num2 != '\0' && *num1 == *num2)
	{
		num1++;
		num2++;
	}
	return ((unsigned char)*num1 - (unsigned char)*num2);
}

int	arg_str_cmp(char *s1, char *s2)
{
	int			i;
	int			j;
	int			neg1;
	int			neg2;
	const char	*num1;

	i = skip_push_sign(s1);
	j = skip_push_sign(s2);
	neg1 = is_negative(s1, i);
	neg2 = is_negative(s2, j);
	if (neg1 != neg2)
	{
		if (neg1)
			return (-1);
		return (1);
	}
	if (neg1)
		i++;
	if (neg2)
		j++;
	num1 = skip_leading_zeros(s1 + i);
	return (compare_digits(num1, skip_leading_zeros(s2 + j)));
}
