/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:39:39 by amlee             #+#    #+#             */
/*   Updated: 2026/07/23 15:39:41 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eyes.h"

int	final_check_rule(int *clues, int **grid, int size)
{
	int	arah;
	int	pos;

	arah = 0;
	while (arah < 4)
	{
		pos = 0;
		while (pos < size)
		{
			if (clues[(arah * size) + pos]
				!= eyes(grid, arah, pos, size))
				return (0);
			pos++;
		}
		arah++;
	}
	return (1);
}

int	check_row(int *clues, int **grid, int row, int size)
{
	if ((eyes(grid, 2, row, size)) != clues[(2 * size) + row])
		return (0);
	if ((eyes(grid, 3, row, size)) != clues[(3 * size) + row])
		return (0);
	return (1);
}

int	check_column(int *clues, int **grid, int col, int size)
{
	if ((eyes(grid, 0, col, size)) != clues[(0 * size) + col])
		return (0);
	if ((eyes(grid, 1, col, size)) != clues[(1 * size) + col])
		return (0);
	return (1);
}
