/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 09:59:59 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 10:00:02 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "core.h"
#include "init_utils.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	size;
	int	*clue;
	int	**grid;

	if (ac != 2)
		return (ft_printerror(), 1);
	size = get_size(av[1]);
	if (size < 4 || size > 9)
		return (ft_printerror(), 1);
	if (!check_input(av, size))
		return (ft_printerror(), 1);
	clue = set_clue(size, av[1]);
	grid = create_grid(size);
	if (core(0, grid, size, clue))
		print_solved(grid, size);
	else
		ft_printerror();
	free(clue);
	free_grid(grid, size);
	return (0);
}
