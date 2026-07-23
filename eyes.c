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

int	top(int **grid, int pos)
{
	int	i;
	int	mem;
	int	qty;

	i = 0;
	mem = 0;
	qty = 0;
	while (i < 4)
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

int	left(int **grid, int pos)
{
	int	i;
	int	mem;
	int	qty;

	i = 0;
	mem = 0;
	qty = 0;
	while (i < 4)
	{
		if (grid[pos][i] > mem)
		{
			mem = grid[pos][i];
			qty++;
