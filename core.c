/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:06:24 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 10:06:30 by amlee            ###   ########.fr       */
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

int	core(int n, int **grid, int size, int *clues)
{
	int	x;
	int	y;

	x = n % 4;
	y = n / 4;
	if (y == size)
		return (final_check_rule(clues, grid, size));
	while (++grid[y][x] <= size)
	{
		if (is_unique(grid, x, y))
		{
			if (core(n + 1, grid, size, clues))
				return (1);
		}
	}
	grid[y][x] = 0;
	return (0);
}
