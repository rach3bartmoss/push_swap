/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:38:00 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 21:38:04 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//shift all elements in stack by one
//the first elemente becomes the last one
//the shifting is up. e.g.:
/*arr[3] =			becomes:	arr[3] =
			{12}						{55}
			{55}						{20}
			{20}						{12}
*/
void	ra(t_stack *stack)
{
	int	i;
	int	j;
	int	first;

	if (stack->size_a < 1)
		return ;
	i = 0;
	j = 0;
	while (i < 1)
	{
		first = stack->stack_a[0];
		while (j < stack->size_a - 1)
		{
			stack->stack_a[j] = stack->stack_a[j + 1];
			j++;
		}
		stack->stack_a[stack->size_a - 1] = first;
		i++;
	}
}

void	rb(t_stack *stack)
{
	int	i;
	int	j;
	int	first;

	if (stack->size_b < 1)
		return ;
	i = 0;
	j = 0;
	while (i < 1)
	{
		first = stack->stack_b[0];
		while (j < stack->size_b - 1)
		{
			stack->stack_b[j] = stack->stack_b[j + 1];
			j++;
		}
		stack->stack_b[stack->size_b - 1] = first;
		i++;
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}

void	rra(t_stack *stack)
{
	int	i;
	int	j;
	int	last;

	if (stack->size_a < 1)
		return ;
	i = 0;
	j = stack->size_a - 1;
	while (i < 1)
	{
		last = stack->stack_a[stack->size_a - 1];
		while (j > 0)
		{
			stack->stack_a[j] = stack->stack_a[j - 1];
			j--;
		}
		stack->stack_a[0] = last;
		i++;
	}
}

void	rrb(t_stack *stack)
{
	int	i;
	int	j;
	int	last;

	if (stack->size_b < 1)
		return ;
	i = 0;
	j = stack->size_b - 1;
	while (i < 1)
	{
		last = stack->stack_b[stack->size_b - 1];
		while (j > 0)
		{
			stack->stack_b[j] = stack->stack_b[j - 1];
			j--;
		}
		stack->stack_b[0] = last;
		i++;
	}
}
