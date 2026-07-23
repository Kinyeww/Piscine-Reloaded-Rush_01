#include "parsing.h"

int	check_input(char **av, int size)
{
	if (size == -1)
		return (0);
	if (!check_is_num(av[1], size))
	{
		printf("invalid num\n");
		return (0);
	}
	return (size);
}

int	check_size(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			count++;
		i++;
	}
	printf("count = %d\n", count);
	if (count % 4 != 0)
	{
		printf("invalid arg size\n");
		return (-1);
	}
	return (count / 4);
}

int	check_is_num(char *str, int size)
{
	int	i;

	i = 0;
	size = size + '0';
	while (str[i])
	{
		if (str[i] < '1' || str[i] > size)
			return (0);
		i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}