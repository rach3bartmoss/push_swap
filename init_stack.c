#include "push_swap.h"

//initializes values in the struct such as the stack a and b and its sizes
void	init_stack(t_stack *stack, int ac, char **av)
{
	int	i;
	int	j;

	stack->stack_b = malloc((ac - 1) * sizeof(int));
	stack->size_a = (ac - 1);
	i = 0;
	j = 1;
	stack->stack_a = malloc((ac - 1) * sizeof(int));
	stack->size_b = 0;
	while (j < ac)
	{
		stack->stack_a[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
}
