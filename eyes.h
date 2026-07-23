/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eyes.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 10:58:26 by amlee             #+#    #+#             */
/*   Updated: 2026/07/23 10:58:28 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EYES_H
# define EYES_H

# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

int	top(int **grid, int pos, int x);
int	bottom(int **grid, int pos, int x);
int	left(int **grid, int pos, int x);
int	right(int **grid, int pos, int x);
int	eyes(int **grid, int arah, int pos, int x);

#endif
