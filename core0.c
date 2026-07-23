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

int core(int x, int y, int **grid, int size) // current position is passed into the function
{
    int current;

    current = grid[y][x];
    if (x == size - 1 && y == size - 1 && final_check_rule())
        return(1);
    while (current < size)
    {
        current++;
        if (x == size - 1 && y != size - 1 && !check_rule(x))
            break;
        else if (x != size - 1 && y == size - 1 && !check_rule(y))
            break;
        else if (x == size - 1 && y == size - 1 && !final_check_rule())
            break;
        if (!is_unique())
            core(x, y, grid, size);
        else if (is_unique() && x < size - 1)
            core(x + 1, y, grid, size);
        else if (is_unique() && x == size - 1)
            core(0, y + 1, grid, size);
        
    }
    current = 0;
    return (0);
}
