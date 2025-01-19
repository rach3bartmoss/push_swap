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
