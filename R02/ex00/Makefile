SRC = src/main.c \
	src/ft_atoa.c \
	src/ft_dict.c \
	src/ft_disp.c \
	src/ft_file.c \
	src/ft_is.c \
	src/ft_putstr_out.c \
	src/ft_split.c \
	src/ft_string.c \
	src/ft_tablelen.c \
	src/ft_trim.c \
	src/ft_trios.c
OUT = $(patsubst %.c,%.o,$(SRC))
NAME = rush-02

.PHONY: fclean clean all re

all: $(NAME)

$(NAME): $(OUT)
	gcc $(OUT) -o $(NAME)

$(OUT):
	gcc -Wall -Wextra -Werror -g -c $*.c -o $*.o -I ./include

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OUT)

re: fclean all
