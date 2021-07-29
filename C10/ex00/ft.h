#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE	4096

void	ft_putstr_out(char *str, int out);
void	ft_display_file(char *filename);

#endif