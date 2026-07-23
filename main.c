// #include "eyes.h"
#include "parsing.h"
#include <stdlib.h>

void	print_solved(int **grid, int size);
int		**create_grid(int size);

int	main(int ac, char **av)
{
	int	size;
	//int	*clue;
	int **grid;

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
	//clue = set_clue();
	grid = create_grid(size);
	if (core(0, 0, grid, size))
		print_solved(grid, size);
	return (1);
}

void	print_solved(int **grid, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%d ", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\nend printing\n");
}

int	**create_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	i = 0;
	j = 0;
	grid = (int **)malloc(sizeof(int *) * (size));
	while (i < size)
	{
		grid[i] = (int *)malloc(sizeof(int) * size);
		i++;
	}
	i = 0;
	while(i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	print_solved(grid, size);
	return (grid);
}
