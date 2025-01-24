/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:55:02 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:09:06 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize_stack(t_stack *stack, t_norm *norm)
{
	int	i;
	int	*temp_sort;

	norm->size = stack->size_a;
	norm->original = malloc(sizeof(int) * norm->size);
	norm->normalized = malloc(sizeof(int) * norm->size);
	temp_sort = malloc(sizeof(int) * norm ->size);
	i = 0;
	while (i < norm->size)
	{
		norm->original[i] = stack->stack_a[i];
		temp_sort[i] = stack->stack_a[i];
		i++;
	}
	ft_bubble_sort(temp_sort, norm->size);
	i = 0;
	while (i < norm->size)
	{
		norm->normalized[i] = find_position(temp_sort,
				stack->stack_a[i], norm->size);
		stack->stack_a[i] = norm->normalized[i];
		i++;
	}
	free (temp_sort);
}

void	radix_sort_stack_b(t_stack *stack, int next_bit)
{
	int	size_b;

	size_b = stack->size_b;
	while (size_b-- > 0)
	{
		if ((stack->stack_b[0] >> next_bit) & 1)
			execute_pa(stack);
		else
			execute_rb(stack);
	}
}

int	find_largest(int *array, int size)
{
	int	largest;
	int	i;

	largest = array[0];
	i = 1;
	while (i < size)
	{
		if (array[i] > largest)
			largest = array[i];
		i++;
	}
	return (largest);
}

void	radix_sort(t_stack *stack)
{
	t_norm	norm;
	int		max_bits;
	int		i;
	int		largest_value;

	if (is_sorted(stack))
		return ;
	normalize_stack(stack, &norm);
	largest_value = find_largest(stack->stack_a, stack->size_a);
	max_bits = calculate_max_bits(largest_value);
	i = 0;
	while (i < max_bits)
	{
		execute_radix_pass(stack, i);
		i++;
	}
	while (stack->size_b > 0)
		execute_pa(stack);
	restore_original_values(stack, &norm);
	free(norm.original);
	free(norm.normalized);
}
