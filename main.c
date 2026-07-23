// #include "eyes.h"
#include "parsing.h"

int	main(int ac, char **av)
{
	int	size;

	if (ac != 2)
	{
		printf("argc has to be exactly 2\n");
		return (0);
	}
	size = check_size(av[1]);
	printf("size = %d\n", size);
	if (size < 4 || size > 9)
	{
		printf("invalid size\n");
		return (0);
	}
	if (!check_input(av, size))
	{
		printf("invalid input detected\n");
		return (0);
	}
	//core();
	//print_solved();
	return (1);
}