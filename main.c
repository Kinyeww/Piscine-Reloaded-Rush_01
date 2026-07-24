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

// #include "eyes.h"
#include "parsing.h"
#include "core.h"
#include "init_utils.h"
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	maintwo(int **grid, int size, int *clue)
{
	if (core(0, grid, size, clue))
		print_solved(grid, size);
	else
		write(1, "NO solution found!!!\n", 21);
}

void	ft_print_size(int size)
{
	write(1, "Size = ", 7);
	ft_putnbr(size);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	size;
	int	*clue;
	int	**grid;

	if (ac != 2)
	{
		write(1, "argc has to be exactly 2\n", 25);
		return (1);
	}
	size = get_size(av[1]);
	ft_print_size(size);
	if (size < 4 || size > 9)
	{
		write(1, "Invalid size\n", 13);
		return (1);
	}
	if (!check_input(av, size))
	{
		write(1, "Invalid input detected\n", 24);
		return (1);
	}
	clue = set_clue(size, av[1]);
	grid = create_grid(size);
	maintwo(grid, size, clue);
	return (0);
}
