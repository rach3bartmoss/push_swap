/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:57:15 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:04:03 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_max_bits(int largest_value)
{
	int	max_bits;

	max_bits = 0;
	while ((largest_value >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	execute_radix_pass(t_stack *stack, int i)
{
	int	j;
	int	size_a;

	j = 0;
	size_a = stack->size_a;
	while (j < size_a)
	{
		if ((stack->stack_a[0] >> i) & 1)
			execute_ra(stack);
		else
			execute_pb(stack);
		j++;
	}
	radix_sort_stack_b(stack, i + 1);
}
