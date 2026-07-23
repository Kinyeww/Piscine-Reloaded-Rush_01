#ifndef INIT_UTILS_H
# define INIT_UTILS_H

int		*set_clue(int size, char *clue);
void	print_solved(int **grid, int size);
int		**create_grid(int size);
int		get_size(char *str);

#endif