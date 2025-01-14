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
#include <stdio.h>

//we must pass the list of integers in the arguments.
//it must accept signed integers. we do not need gen_arr

int	main(int ac, char **av)
{
	t_stack	stack;

	stack.stack_b = NULL;
	(void)stack;
	if (check_input_list(ac, av))
		return (0);
}

//first validate the input
//2nd we handle the swap, push and rotate operations.
//develop the sort algorithm, based on cost
