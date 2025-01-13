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

void	gen_arr(int *stack, int size_n, int v_limit)
{
	unsigned int	seed;
	int	i;

	i = 0;
	seed = time(0);
	while (i < size_n)
	{
		stack[i] = rand_r(&seed);
		i++;
	}
}