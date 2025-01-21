#include "push_swap.h"

static void	swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	ft_bubble_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while(j < size - i - 1)
		{
			if(arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
			j++;
		}
		i++;
	}
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	get_max_bits(int *arr, int size)
{
	int	max;
	int	max_bits;
	int	i;

	max = arr[0];
	i = 1;
	while (i < size)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	max_bits = 0;
	while (max >> max_bits)
		max_bits++;
	return (max_bits);
}

void	restore_original_values(t_stack *stack, t_norm *norm)
{
	int	i;

	i = 0;
	while (i < norm->size)
	{
		stack->stack_a[i] = norm->original[find_position(norm->normalized,
			i, norm->size)];
		i++;
	}
}
