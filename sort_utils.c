#include "libft/libft.h"
#include "push_swap.h"

void	sort_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
}

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->stack_a[0];
	b = stack->stack_a[1];
	c = stack->stack_a[2];
	if (a > b && b < c && a < c)
		sa(stack);
	else if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (a > b && b < c && a > c)
		ra(stack);
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(stack);
	}
	else if (a < b && b > c && a > c)
		rra(stack);
}

void	sort_five(t_stack *stack)
{
	int	smallest;
	int	i;

	while (stack->size_a > 3)
	{
		smallest = stack->stack_a[0];
		i = 1;
		while (i < stack->size_a)
		{
			if (stack->stack_a[i] < smallest)
				smallest = stack->stack_a[i];
			i++;
		}
		while (stack->stack_a[0] != smallest)
		{
			if (find_position(stack->stack_a,
					smallest, stack->size_a) <= stack->size_a / 2)
				ra(stack);
			else
				rra(stack);
		}
		pb(stack);
	}
	sort_three(stack);
	while (stack->size_b > 0)
		pa(stack);
}

void	sort_stack(t_stack *stack)
{
	if (is_sorted(stack))
	{
		(void)ft_printf("Error\nStack is already sorted\n");
		return ;
	}
	if (stack->size_a == 2)
		sort_two(stack);
	else if (stack->size_a == 3)
		sort_three(stack);
	else if (stack->size_a <= 5)
		sort_five(stack);
	else
		radix_sort(stack);
}
