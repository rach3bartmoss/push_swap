#include "push_swap.h"
#include <fcntl.h>
#include <stdlib.h>

int	find_position(int *sorted, int number, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == number)
			return (i);
		i++;
	}
	return (0);
}

void	normalize_stack(t_stack *stack, t_norm *norm)
{
	int	i;
	int	*temp_sort;

	norm->size = stack->size_a;
	norm->original = malloc(sizeof(int) * norm->size);
	norm->normalized = malloc(sizeof(int) * norm->size);
	temp_sort = malloc(sizeof(int) * norm ->size);
	i = 0;
	while (i < norm->size)
	{
		norm->original[i] = stack->stack_a[i];
		temp_sort[i] = stack->stack_a[i];
		i++;
	}
	ft_bubble_sort(temp_sort, norm->size);
	i = 0;
	while (i < norm->size)
	{
		norm->normalized[i] = find_position(temp_sort,
			stack->stack_a[i], norm->size);
		i++;
	}
	free (temp_sort);
}

void	radix_sort(t_stack *stack)
{
	t_norm	norm;
	int		max_bits;
	int		i;
	int		j;

	normalize_stack(stack, &norm);
	max_bits = 0;
	while ((norm.size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < norm.size)
		{
			if ((stack->stack_a[0] >> i) & 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->size_b > 0)
			pa(stack);
		i++;
	}
	free(norm.original);
	free(norm.normalized);
}
