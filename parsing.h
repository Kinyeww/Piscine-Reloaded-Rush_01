/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:05:26 by amlee             #+#    #+#             */
/*   Updated: 2026/07/24 10:05:27 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <stdio.h>
# include <unistd.h>

int		check_input(char **av, int size);
int		check_is_num(char *str, int size);
void	ft_printerror(void);
void	free_grid(int **grid, int size);

// current position is passed into the function

#endif
