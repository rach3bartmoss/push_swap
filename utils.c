/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:50:44 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 21:51:17 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	ft_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
			j++;
		}
		i++;
	}
}

int	find_position(int *sorted, int number, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == number)
			return (i);
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	restore_original_values(t_stack *stack, t_norm *norm)
{
	int	i;

	i = 0;
	while (i < norm->size)
	{
		stack->stack_a[i] = norm->original[find_position(norm->normalized,
				i, norm->size)];
		i++;
	}
}
