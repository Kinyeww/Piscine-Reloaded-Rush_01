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
	pos = 0;
	while (arah < 4)
	{
		while (pos < size)
		{
			if (clues[pos] != eyes(grid, arah, pos, size))
				return (0);
			pos++;
		}
		arah++;
	}
	return (1);
}

int	check_x(int *clues, int **grid, int size)
{
	int	pos;
	int	arah;
	int	i;

	arah = 2;
	pos = 0;
	i = 0;
	while (arah < 4)
	{
		if (clues[i] != eyes(grid, arah, pos, size))
			return (0);
		arah++;
		i++;
	}
	return (1);
}

int	check_y(int *clues, int **grid, int size)
{
	int	pos;
	int	arah;
	int	i;

	arah = 0;
	pos = 0;
	i = 0;
	while (arah < 2)
	{
		if (clues[i] != eyes(grid, arah, pos, size))
			return (0);
		arah++;
		i++;
	}
	return (1);
}
