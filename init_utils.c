/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:04:42 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 10:04:44 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_utils.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nb);

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
			ft_putnbr(grid[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\nPrinting Ended\n", 16);
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
	write(1, "Count = ", 8);
	ft_putnbr(count);
	write(1, "\n", 1);
	if (count % 4 != 0)
	{
		write(1, "Invalid arg size\n", 17);
		return (-1);
	}
	return (count / 4);
}
