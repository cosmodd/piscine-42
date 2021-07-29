SOURCES = main.c ft_display_file.c ft_putstr_out.c
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean