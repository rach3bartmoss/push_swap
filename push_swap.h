//future project library

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <time.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	*input_list;
	int	n_instructions;
}				t_stack;

typedef struct s_norm
{
	int	*original;
	int	*normalized;
	int	size;
}				t_norm;

//swap.c
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
//push.c
void	pa(t_stack *stack);
void	pb(t_stack *stack);
//rotate.c
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
//rotate_utils.c
void	rrr(t_stack *stack);
//validate_input.c
int		is_a_number(char *av);
int		arg_is_zero(char *av);
int		is_repeated(char **av);
char	**validate_list(int ac, char **av);
char	**format_input(int ac, char **av);
//validate_input_utils.c
int		ft_issign(char c);
int		check_input_list(char **split_av);
//arg_str_cmp_utils.c
int		arg_str_cmp(char *s1, char *s2);
//init_stack.c
void	init_stack(t_stack *stack, char **formatted_av);
//utils.c
void	ft_bubble_sort(int *arr, int size);
int		find_position(int *sorted, int number, int size);
int		is_sorted(t_stack *stack);
void	restore_original_values(t_stack *stack, t_norm *norm);
//sort.c
void	normalize_stack(t_stack *stack, t_norm *norm);
void	radix_sort(t_stack *stack);
//sort_utils.c
void	sort_stack(t_stack *stack);

#endif
