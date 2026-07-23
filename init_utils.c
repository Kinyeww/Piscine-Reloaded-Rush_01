#include "init_utils.h"
#include <stdlib.h>
#include <stdio.h>

int	*set_clue(int size, char *clue)
{
	int	*clue_arr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	clue_arr = malloc(sizeof(int) * (size * 4));
	while (i < (size * 4))
	{
		clue_arr[i] = clue[j] - '0';
		i++;
		j += 2;
	}
	return (clue_arr);
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
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	get_size(char *str)
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
