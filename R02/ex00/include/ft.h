#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define DEFAULT_DICT	"numbers.en.dict"
# define DICT_ERR		"Dict Error\n"
# define ERROR			"Error\n"
# define BUFFER_SIZE	32768
# define TERN(n,x,y)	(n) ? x : y

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

typedef struct s_trio
{
	char	*hundred;
	char	*dozen;
	char	*unit;
}	t_trio;

// Dict
int			ft_is_key_valid(char *key);
int			ft_is_value_valid(char *value);
t_dict		*ft_get_dict(char *path);
void		ft_free_dict(t_dict *dict);
char		*ft_get_value(t_dict *dict, char *key);

// Disp
int			ft_disp_hundred(t_dict *dict, t_trio trio, int *print_spc);
int			ft_disp_dozen(t_dict *dict, t_trio trio, int *print_spc);
int			ft_disp_unit(t_dict *dict, t_trio trio, int *print_spc);

// Tests
int			is_space(char c);
int			is_numeric(char	c);
int			ft_str_is_printable(char *str);

// String
int			ft_strlen(char *str);
char		*ft_trim(char *str);
void		ft_putstr_out(char *str, int out);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strndup(char *src, int n);
char		*ft_strcat(char *dest, char *src);
char		*ft_atoa(char *str);

// Files
char		**read_file(char *path);
int			count_lines(char *path);

// Split
int			ft_tablelen(char **table);
int			ft_is_sep(char *str, char *charset);
int			ft_count_words(char *str, char *charset);
char		*ft_extract_word(char *str, char *charset);
char		**ft_split(char *str, char *charset);
char		**ft_split_first(char *str, char *charset);

// Trios
char		*ft_format_num(char	*str);
t_trio		*ft_get_trios(char	*str);
void		ft_print_trio(t_dict *dict, t_trio trio);

#endif
