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

#include "libft/libft.h"
#include "push_swap.h"

//we must pass the list of integers in the arguments. OK
//it must accept signed integers. we do not need gen_arr OK
//in return value the smallest int being at top
//the program must display the smallest list of pa pb etc instructions
//instructions separated by \n

static void	clean_formatted_av(char **formatted_av)
{
	int	i;

	i = 0;
	while(formatted_av[i])
		free(formatted_av[i++]);
	free(formatted_av);
}

int	main(int ac, char **av)
{
	t_stack	stack;
	char	**formatted_av;

	if (ac == 1)
	{
		ft_printf("Error\nNo parameters provided\n");
		return (1);
	}
	formatted_av = validate_list(ac, av);
	if (!formatted_av)
		return (1);
	init_stack(&stack, formatted_av);
	clean_formatted_av(formatted_av);
	ft_printf("Original input state:\n");
	for (int i = 0; i < ac - 1; i++)
	{
		ft_printf("%d\n", stack.stack_a[i]);
	}
	ft_printf("-----size_a:%d-----size_b:%d\n", stack.size_a, stack.size_b);
	radix_sort(&stack);
	ft_printf("After radix_sort\n");
	for (int i = 0; i < stack.size_a; i++)
	{
		ft_printf("stack_a:|%d|\n", stack.stack_a[i]);
	}
	write(1, "\n", 1);
	ft_printf("Number of instructions: %d\n", stack.n_instructions);
	free(stack.stack_a);
	free(stack.stack_b);
	//once validate we need to discover a way to return the number of instructitions to sort.
}

//first validate the input
//2nd we handle the swap, push and rotate operations.
//develop the sort algorithm, based on cost
