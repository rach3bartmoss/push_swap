#include "push_swap.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}
//LINE 15 REMEMBER TO USE FT_STRCPY

int	check_input_list(int ac, char **av)
{
	int			i;
	long int	n;
	long int	n_zeros;

	i = 1;
	n = 0;
	n_zeros = 0;
	while (i < ac)
	{
		n = atoi(av[i]);
		if (!is_a_number(av[i]))
			return (printf("Error\nArg not a number.\n"));
		if (n > INT_MAX || n < INT_MIN)
			return (printf("Error\nArg number out of int range.\n"));
		n_zeros += arg_is_zero(av[i]);
		i++;
	}
	if (n_zeros > 1)
		return (printf("Error\nRepeated zeros in the arg list\n"));
	if (is_repeated(av))
		return (printf("Error\nRepeated numbers in the arg list\n"));
	return (0);
}

int	arg_str_cmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}
