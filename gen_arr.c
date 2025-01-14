/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 20:12:46 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/12 20:30:27 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//will generate a array with random values, within a log n range.
#include "push_swap.h"

static void	init_with_positive_values(int *stack, size_t max_range)
{
	size_t	min_range;

	min_range = 0;
	while (min_range <= max_range)
	{
		stack[min_range] = min_range;
		min_range++;
	}
}

static void	randomize(int *stack, int *temp_stack,int size_n, int v_limit)
{

}

//Fisher-Yates Shuffle algorithm O(n)
void	gen_arr(int *stack, int size_n, int v_limit)
{
	int	i;
	int	j;
	int	temp;
	int	*all_numbers;

	if (v_limit < size_n || v_limit < 1)
	{
		printf("Error\nInvalid range or size");
		return ;
	}
	i = 0;
	all_numbers = malloc((v_limit + 1) * sizeof(int));
	if (!all_numbers)
		return ;
	init_with_positive_values(all_numbers, v_limit);
	srand(time(NULL));
	while (i < size_n)
	{
		j = i + (rand() % (v_limit + 1 - i));
		temp = all_numbers[i];
		all_numbers[i] = all_numbers[j];
		all_numbers[j] = temp;
		stack[i] = all_numbers[i];
		i++;
	}
	free (all_numbers);
}
