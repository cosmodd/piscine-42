SOURCES = $(shell find src -name '*.c')
OBJECTS = $(SOURCES:.c=.o)

COMPILE = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

NAME = bsq

$(NAME): $(OBJECTS)
	$(COMPILE) $(CFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
