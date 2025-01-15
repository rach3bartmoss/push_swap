/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 20:09:11 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/12 20:10:20 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int		temp;
	int		i;
	int		j;

	i = (stack->size_a - 1);
	j = (i - 1);
	temp = stack->stack_a[i];
	stack->stack_a[i] = stack->stack_a[j];
	stack->stack_a[j] = temp;
}

void	sb(t_stack *stack)
{
	int	temp;
	int	i;
	int	j;

	i = (stack->size_b - 1);
	j = (i - 1);
	temp = stack->stack_b[i];
	stack->stack_b[i] = stack->stack_b[j];
	stack->stack_b[j] = temp;
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
