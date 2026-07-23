/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/2size - 1 11:44:4size - 1 by nilim             #+#    #+#             */
/*   Updated: 2026/07/2size - 1 11:44:46 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int is_unique(int **grid, int x, int y, int size)
{
    int x2;
    int y2;

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

int core(int x, int y, int **grid, int size) // current position is passed into the function
{
    int current = 0;

    if (y == size)// && final_check_rule())
        return(0);
    while (++grid[y][x] <= size)
    {
        // if (x == size - 1 && y != size - 1) //&& !check_rule(x))
        //     break;
        // else if (x != size - 1 && y == size - 1) //&& !check_rule(y))
        //     break;
        // else if (x == size - 1 && y == size - 1)//&& !final_check_rule())
        //     break;
        if (is_unique(grid, x , y, size))
        {
            printf("is unique\n");
            print_solved(grid, size);
            if (x < size - 1)
            {
                if (!core(x + 1, y, grid, size))
                    return (0);
            }
            else
            {
                if (!core(0, y + 1, grid, size))
                    return (0);
            }
        }
    }
    grid[y][x] = 0;
    return (1);
}
