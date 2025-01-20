#include "libft/libft.h"
#include "push_swap.h"

//initializes values in the struct such as the stack a and b and its sizes
void	init_stack(t_stack *stack, char **formatted_av)
{
	int	i;
	int	size;

	stack->n_instructions = 0;
	size = 0;
	while (formatted_av[size])
		size++;
	stack->stack_a = malloc(size * sizeof(int));
	if (!stack->stack_a)
		return ;
	stack->stack_b = malloc(size * sizeof(int));
	if (!stack->stack_b)
		return ;
	stack->size_a = size;
	stack->size_b = 0;
	i = 0;
	while (formatted_av[i])
	{
		stack->stack_a[i] = ft_atoi(formatted_av[i]);
		i++;
	}
}
