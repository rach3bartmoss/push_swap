/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:37:44 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:19:34 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}

void	execute_rra(t_stack *stack)
{
	rra(stack);
	ft_printf("rra\n");
	stack->n_instructions++;
}
