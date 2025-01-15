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

	if (stack->size_a < 2)
		return ;
	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->size_b < 2)
		return ;
	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = temp;
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}
