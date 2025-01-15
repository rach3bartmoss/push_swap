//future project library

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <time.h>
# include <stddef.h>
# include <string.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	*input_list;
}				t_stack;

void	sa(int *a);
//validate_input.c
int		is_a_number(char *av);
int		arg_is_zero(char *av);
int		is_repeated(char **av);
//validate_input_utils.c
int		ft_isdigit(char c);
int		ft_issign(char c);
int		check_input_list(int ac, char **av);
int		arg_str_cmp(char *s1, char *s2);
//init_stack.c
void	init_stack(t_stack stack, int ac, char **av);

#endif
