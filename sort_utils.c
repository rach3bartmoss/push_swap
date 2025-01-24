/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:39:47 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:46:37 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
	{
		sa(stack);
		ft_printf("sa\n");
	}
}

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->stack_a[0];
	b = stack->stack_a[1];
	c = stack->stack_a[2];
	if (a > b && b < c && a < c)
		execute_sa(stack);
	else if (a > b && b > c)
	{
		execute_sa(stack);
		execute_rra(stack);
	}
	else if (a > b && b < c && a > c)
		execute_ra(stack);
	else if (a < b && b > c && a < c)
	{
		execute_sa(stack);
		execute_ra(stack);
	}
	else if (a < b && b > c && a > c)
		execute_rra(stack);
}

void	sort_five(t_stack *stack)
{
	while (stack->size_a > 3)
	{
		execute_find_smallest_and_push(stack);
	}
	sort_three(stack);
	while (stack->size_b > 0)
	{
		execute_pa(stack);
	}
}

void	sort_stack(t_stack *stack)
{
	if (is_sorted(stack))
	{
		(void)ft_printf("Error\nStack is already sorted\n");
		return ;
	}
	if (stack->size_a == 2)
		sort_two(stack);
	else if (stack->size_a == 3)
		sort_three(stack);
	else if (stack->size_a <= 5)
		sort_five(stack);
	else
		radix_sort(stack);
}
