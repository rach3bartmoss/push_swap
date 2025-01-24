/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:01:00 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:19:44 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//EXECUTE_RRA LOCATED IN ROTATE_UTILS.C
void	execute_ra(t_stack *stack)
{
	ra(stack);
	ft_printf("ra\n");
	stack->n_instructions++;
}

void	execute_pb(t_stack *stack)
{
	pb(stack);
	ft_printf("pb\n");
	stack->n_instructions++;
}

void	execute_pa(t_stack *stack)
{
	pa(stack);
	ft_printf("pa\n");
	stack->n_instructions++;
}

void	execute_rb(t_stack *stack)
{
	rb(stack);
	ft_printf("rb\n");
	stack->n_instructions++;
}

void	execute_sa(t_stack *stack)
{
	sa(stack);
	ft_printf("sa\n");
	stack->n_instructions++;
}
