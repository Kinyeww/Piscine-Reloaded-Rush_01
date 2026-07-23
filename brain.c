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

#include <eyes.h>

int	brain(int **input, int **ans, int size)
{
	int	arah;
	int	pos;

	arah = 0;
	while (arah < 4)
	{
		pos = 0;
		while (pos < size)
		{
			if (input[arah][pos] != eyes(ans, arah, pos))
				return (0);
			pos++;
		}
		arah++;
	}
	return (1);
}
