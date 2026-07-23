/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/2size - 1 11:44:4size - 1 by nilim             #+#    #+#             */
/*   Updated: 2026/07/2size - 1 11:44:46 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"
#include "brain.h"
#include "init_utils.h"

int	is_unique(int **grid, int x, int y)
{
	int	x2;
	int	y2;

	x2 = 0;
	while (x2 < x)
	{
		if (grid[y][x2] == grid[y][x])
			return (0);
		x2++;
	}
	y2 = 0;
	while (y2 < y)
	{
		if (grid[y2][x] == grid[y][x])
			return (0);
		y2++;
	}
	return (1);
}

int	core(int x, int y, int **grid, int size, int *clues)
{
	// int	*clues;
	// int	size;

	// size = get_size(av);
	// clues = set_clue(size, av);
	if (y == size)
		return (final_check_rule(clues, grid, size));
	while (++grid[y][x] <= size)
	{
		if (is_unique(grid, x, y))
		{
			if (x < size - 1)
			{
				if (core(x + 1, y, grid, size, clues))
					return (1);
			}
			else
			{
				if (core(0, y + 1, grid, size, clues))
					return (1);
			}
		}
	}
	print_solved(grid, size);
	grid[y][x] = 0;
	return (0);
}
