/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckin-yew <ckin-yew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 11:44:43 by nilim             #+#    #+#             */
/*   Updated: 2026/07/23 17:10:35 by ckin-yew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int core(int x, int y, int **grid, int size) // current position is passed into the function
{
    grid[x][y]++;
    if (final_check_rule() && grid[x + 1][y])
        return (1);
    
    
}
