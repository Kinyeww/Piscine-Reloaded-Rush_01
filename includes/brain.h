/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 09:54:32 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 09:54:36 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

int	final_check_rule(int *clues, int **grid, int size);
int	check_row(int *clues, int **grid, int row, int size);
int	check_column(int *clues, int **grid, int col, int size);
int	check_partial_row(int **grid, int n, int size, int *clues);
int	check_partial_column(int **grid, int n, int size, int *clues);

/*---  brain_utils  ---*/
int	find_max_col(int **grid, int x, int y);
int	find_max_row(int **grid, int x, int y);

#endif
