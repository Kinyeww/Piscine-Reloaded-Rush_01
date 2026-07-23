/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eyes.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:05:07 by amlee             #+#    #+#             */
/*   Updated: 2026/07/22 17:05:09 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eyes.h"

//Grassy's explaination:
//We're currently looking at each row individually
//teaching the computer to understand the skyscraper concept
//and then output-ing how many scrapers it sees.
int	top(int **grid, int pos, int size)
{
	int	i;
	int	mem;
	int	qty;

	i = 0;
	mem = 0;
	qty = 0;
	while (i < size)
	{
		if (grid[i][pos] > mem)
		{
			mem = grid[i][pos];
			qty++;
		}
		i++;
	}
	return (qty);
}
//int size is the grid size variable

int	left(int **grid, int pos, int size)
{
	int	i;
	int	mem;
	int	qty;

	i = 0;
	mem = 0;
	qty = 0;
	while (i < size)
	{
		if (grid[pos][i] > mem)
		{
			mem = grid[pos][i];
			qty++;
		}
		i++;
	}
	return (qty);
}

//now we start reading backwards ok!
int	right(int **grid, int pos, int size)
{
	int	i;
	int	mem;
	int	qty;

	i = size - 1;
	mem = 0;
	qty = 0;
	while (i > -1)
	{
		if (grid[pos][i] > mem)
		{
			mem = grid[pos][i];
			qty++;
		}
		i--;
	}
	return (qty);
}

int	bottom(int **grid, int pos, int size)
{
	int	i;
	int	mem;
	int	qty;

	i = size - 1;
	mem = 0;
	qty = 0;
	while (i > -1)
	{
		if (grid[i][pos] > mem)
		{
			mem = grid[i][pos];
			qty++;
		}
		i--;
	}
	return (qty);
}

int	eyes(int **grid, int arah, int pos, int size)
{
	if (arah == UP)
		return (top(grid, pos, size));
	if (arah == DOWN)
		return (bottom(grid, pos, size));
	if (arah == LEFT)
		return (left(grid, pos, size));
	if (arah == RIGHT)
		return (right(grid, pos, size));
	return (0);
}
