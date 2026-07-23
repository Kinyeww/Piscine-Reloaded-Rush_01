/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 11:44:43 by nilim             #+#    #+#             */
/*   Updated: 2026/07/23 11:44:46 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eyes.h"

int core(int x, int y, int **grid)
{
    int current;

    current = grid[y][x];
    while (current < 4)
    {
        current++;
        if (!is_unique)
            core(x, y, grid);
        else if (x == 3 && !check_rule())
    }
    current = 0;
    return 0;
}
