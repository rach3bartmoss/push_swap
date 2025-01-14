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

int	main(void)
{
	int	*a;

	a = calloc(10, sizeof(int));

	gen_arr(a, 10, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d.%d\n", i + 1,a[i]);
	}
	free(a);
	return (0);
}
