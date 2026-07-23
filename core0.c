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

int core(int x, int y, int **grid, int size) // current position is passed into the function
{
    int current;

    current = grid[y][x];
    current++;
    if (current > size)
    {
        current = 0;
        return (0);
    }
    if (is_unique() && x < size) // if number is not unique, call this func
        core(x + 1, y, grid);
    if (x == 3 && y != 3 && !check_rule(x))
        return (0);
    else if (x != 3 && y == 3 && !check_rule(y))
        return (0);
    else if (x == 3 && y == 3 && !final_check_rule())
        return (0);
    else if (x == 3 && y == 3 && final_check_rule())
        return(1);
    if (x < 3 && )
}
