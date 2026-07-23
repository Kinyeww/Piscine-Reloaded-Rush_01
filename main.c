// #include "eyes.h"
#include "parsing.h"
#include "core.h"
#include "init_utils.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	size;
	int	*clue;
	int	**grid;

	if (ac != 2)
	{
		printf("argc has to be exactly 2\n");
		return (1);
	}
	size = get_size(av[1]);
	printf("size = %d\n", size);
	if (size < 4 || size > 9)
	{
		printf("invalid size\n");
		return (1);
	}
	if (!check_input(av, size))
	{
		printf("invalid input detected\n");
		return (1);
	}
	clue = set_clue(size, av[1]);
	grid = create_grid(size);
	if (core(0, 0, grid, size, clue))
		print_solved(grid, size);
	else
		write (1, "Error\n", 6);
	print_solved(grid, size);
	//free (clue);
	//free_grid(grid, size);
	return (0);
}
