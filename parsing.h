#ifndef PARSING_H
# define PARSING_H

#include <stdio.h>
#include <unistd.h>

int	check_input(char **av, int size);
int	check_size(char *str);
int	check_is_num(char *str, int size);
int core(int x, int y, int **grid, int size);
void print_solved(int **grid, int size); // current position is passed into the function

#endif