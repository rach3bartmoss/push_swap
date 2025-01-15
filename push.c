#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	temp;
	int	i;
	int	j;

	i = (stack->size_a - 1);
	j = i;
	temp = stack->stack_b[j];

}

//THIS FUNCTION MUST PUSH DOWN ALL THE VALUES INSIDE THE A STACK
//TO PUT A GIVEN VALUE AT THE TOP OF THE GIVEN STACK
static void	push_down(t_stack *stack, int *sender, int *receiver, int value)
{
	int	i;
	int	j;
	int	temp;

	i = (stack->size_a - 1);
	j = i - i;
	while (i)
	{
		temp = receiver[i - 1];
	}
}
