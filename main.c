// #include "eyes.h"
#include "parsing.h"
#include "core.h"
#include "init_utils.h"
#include <stdlib.h>


void	print_solved(int **grid, int size);
int		**create_grid(int size);
int		*set_clue(int size, char *clue);

int	main(int ac, char **av)
{
	int	size;
	int	*clue;
	int	**grid;

	if (ac != 2)
	{
		printf("argc has to be exactly 2\n");
		return (0);
	}
	size = get_size(av[1]);
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
	clue = set_clue(size, av[1]);
	int	k = 0;
	while (k < (size * 4))
	{
		printf("clue[%d] = %d\n", k, clue[k]);
		k++;
	}
	grid = create_grid(size);
	if (core(0, 0, grid, av[1]))
		print_solved(grid, size);
	else
		write (1, "Error\n", 6);
	//free (clue);
	//free_grid(grid, size);
	return (1);
}
