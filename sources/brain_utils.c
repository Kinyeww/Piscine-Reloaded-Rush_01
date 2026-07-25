/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:39:39 by amlee             #+#    #+#             */
/*   Updated: 2026/07/23 15:39:41 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.h"

int	find_max_row(int **grid, int x, int y)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i <= x)
	{
		if (max < grid[y][i])
			max = grid[y][i];
		i++;
	}
	return (max);
}

int	find_max_col(int **grid, int x, int y)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i <= y)
	{
		if (max < grid[i][x])
			max = grid[i][x];
		i++;
	}
	return (max);
}
