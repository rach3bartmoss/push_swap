#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>
#include <string.h>

//if current is a valid number return 1 else returns 0
int	is_a_number(char *av)
{
	int	i;

	i = 0;
	if (ft_issign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && ft_isdigit(av[i]))
		i++;
	if (av[i] != '\0' && !ft_isdigit(av[i]))
		return (0);
	return (1);
}

int	is_repeated(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[j])
		{
			if (j != i && arg_str_cmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	arg_is_zero(char *av)
{
	int	i;

	i = 0;
	if (ft_issign(av[i]))
		i++;
	while (av[i] && av[i] == '0')
		i++;
	if (av[i] != '\0')
		return (0);
	return (1);
}

char	**format_input(int ac, char **av)
{
	char	**formatted_av;
	char	*joined_str;
	char	*temp;
	int		i;

	if (ac == 2)
		return (ft_split(av[1], ' '));
	joined_str = ft_strdup("");
	i = 1;
	while (i < ac)
	{
		temp = joined_str;
		if (i > 1)
		{
			joined_str = ft_strjoin(temp, " ");
			free(temp);
			temp = joined_str;
		}
		joined_str = ft_strjoin(temp, av[i]);
		free(temp);
		i++;
	}
	formatted_av = ft_split(joined_str, ' ');
	free(joined_str);
	return (formatted_av);
}

char	**validate_list(int ac, char **av)
{
	char	**formatted_av;
	int		result;
	int		i;

	formatted_av = format_input(ac, av);
	if (!formatted_av)
	{
		ft_printf("Error\nMemory allocation failed during input formatting.\n");
		return (NULL);
	}
	result = check_input_list(formatted_av);
	i = 0;
	if (result != 0)
	{
		while (formatted_av[i])
			free(formatted_av[i++]);
		free(formatted_av);
		return (NULL);
	}
	return (formatted_av);
}
