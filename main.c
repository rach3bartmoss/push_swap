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

//we must pass the list of integers in the arguments. OK
//it must accept signed integers. we do not need gen_arr OK
//in return value the smallest int being at top
//the program must display the smallest list of pa pb etc instructions
//instructions separated by \n

int	main(int ac, char **av)
{
	t_stack	stack;

	//ADD CHECK FOR NO PARAM AT ALL
	if (check_input_list(ac, av))
		return (0);
	init_stack(&stack, ac, av);
	for (int i = 0; i < ac - 1; i++)
	{
		ft_printf("%d\n", stack.stack_a[i]);
	}
	pb(&stack);
	ft_printf("-----------size_a:%d\n", stack.size_a);
	for (int i = 0; i < stack.size_a; i++)
	{
		ft_printf("stack_a:|%d|\n", stack.stack_a[i]);
	}
	write(1, "\n", 1);
	for (int i = 0; i < stack.size_b; i++)
	{
		ft_printf("stack_b:|%d|\n", stack.stack_b[i]);
	}
	free (stack.stack_a);
	//once validate we need to discover a way to return the number of instructitions to sort.
}

//first validate the input
//2nd we handle the swap, push and rotate operations.
//develop the sort algorithm, based on cost
