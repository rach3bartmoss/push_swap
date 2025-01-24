/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopereir <dopereir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:37:06 by dopereir          #+#    #+#             */
/*   Updated: 2025/01/24 22:29:08 by dopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void	execute_rra(t_stack *stack);
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
void	radix_sort_stack_b(t_stack *stack, int next_bit);
void	radix_sort(t_stack *stack);
//sort_utils.c
void	sort_stack(t_stack *stack);
//radix_sort_utils.c
int		calculate_max_bits(int largest_value);
void	execute_radix_pass(t_stack *stack, int i);
//execute_utils.c
void	execute_ra(t_stack *stack);
void	execute_pb(t_stack *stack);
void	execute_pa(t_stack *stack);
void	execute_rb(t_stack *stack);
void	execute_sa(t_stack *stack);
//sort_five_utils.c
void	execute_find_smallest_and_push(t_stack *stack);
int		find_smallest(int *stack_a, int size_a);
void	execute_rotate(t_stack *stack, int smallest);

#endif
