#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define	MAP_ERR		"map error\n"
# define	FILE_BUFFER	32768

# define	TERN(cond, x, y) ((cond) ? x : y)
# define	MIN(x, y) ((x < y) ? (x) : (y))

typedef struct s_map
{
	int		width;
	int		height;
	char	fill[3];
	char	**map;
}	t_map;
typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

typedef struct s_square
{
	t_position	pos;
	int			size;
}	t_square;

void	print_table(char **table);

// Solver
void	copy_1st_row_col(t_map *map, char **sols);
void	compute(t_map *map, char **sols);
void	find_first(t_map *map, char **sols, t_square *square);
void	dynamic_solve(t_map *map, t_square *square);

// File
int		read_next(int f_desc, int *size, char **content);
char	*read_file(int f_desc);
char	*load_file(char *path);

// Is_x
int		is_numeric(char c);
int		is_printable(char c);

// Table
int		chartablelen(char **table);

// Map
int		validate_first_line(t_map *map, char *line);
int		validate_map_chars(t_map *map);
int		has_empty_lines(char *content);
t_map	get_map(char *path);
int		show_map(char *path);

// Split
int		ft_is_sep(char *str, char *charset);
int		ft_count_words(char *str, char *charset);
char	*ft_extract_word(char *str, char *charset);
char	**ft_split(char *str, char *charset);

// String utils
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, int n);
int		index_of(char c, char *str);

#endif