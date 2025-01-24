/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:22:15 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:27:33 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_find_smallest_and_push(t_stack *stack)
{
	int	smallest;

	smallest = find_smallest(stack->stack_a, stack->size_a);
	while (stack->stack_a[0] != smallest)
		execute_rotate(stack, smallest);
	execute_pb(stack);
}

int	find_smallest(int *stack_a, int size_a)
{
	int	i;
	int	smallest;

	i = 1;
	smallest = stack_a[0];
	while (i < size_a)
	{
		if (stack_a[i] < smallest)
			smallest = stack_a[i];
		i++;
	}
	return (smallest);
}

void	execute_rotate(t_stack *stack, int smallest)
{
	if (find_position(stack->stack_a, smallest, stack->size_a)
		<= stack->size_a / 2)
	{
		execute_ra(stack);
	}
	else
	{
		execute_rra(stack);
	}
}
