/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 20:10:43 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/12 20:26:51 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//we must pass the list of integers in the arguments.
//it must accept signed integers. we do not need gen_arr

int	main(int ac, char **av)
{
	t_stack	stack;

	if (check_input_list(ac, av))
		return (0);
	init_stack(&stack, ac, av);
	for (int i = 0; i < ac - 1; i++)
	{
		ft_printf("%d\n", stack.stack_a[i]);
	}
	ss(&stack);
	ft_printf("-----------size_a:%d\n", stack.size_a);
	for (int i = 0; i < ac - 1; i++)
	{
		ft_printf("%d\n", stack.stack_a[i]);
	}
	free (stack.stack_a);
	//once validate we need to discover a way to return the number of instructitions to sort.
}

//first validate the input
//2nd we handle the swap, push and rotate operations.
//develop the sort algorithm, based on cost
