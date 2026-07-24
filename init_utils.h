/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:04:55 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 10:04:56 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_UTILS_H
# define INIT_UTILS_H

int		*set_clue(int size, char *clue);
void	print_solved(int **grid, int size);
int		**create_grid(int size);
int		get_size(char *str);

#endif
