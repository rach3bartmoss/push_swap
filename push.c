/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:37:26 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 21:37:31 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pb_make_room(t_stack *stack)
{
	int	i;

	i = stack->size_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->size_b++;
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->size_a <= 0)
		return ;
	pb_make_room(stack);
	stack->stack_b[0] = stack->stack_a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->size_a--;
}

static void	pa_make_room(t_stack *stack)
{
	int	i;

	i = stack->size_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->size_a++;
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b <= 0)
		return ;
	pa_make_room(stack);
	stack->stack_a[0] = stack->stack_b[0];
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->size_b--;
}
