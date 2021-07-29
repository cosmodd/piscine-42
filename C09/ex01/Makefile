.PHONY: all clean fclean re

SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

# Replace extensions fron .c to .o and adds 'srcs/' in front
SRCS = $(addprefix srcs/, $(SRC_FILES:.c=.o))

# Here the  .c.o  rule defines how to build anyfile.o from anyfile.c
# $<  matches to first dependency, in this case,  anyfile.c
# $(<:.c=.o) matches first dependency and replace .c to .o
.c.o:
	gcc -Wall -Wextra -Werror -c -Iincludes $< -o $(<:.c=.o)

# $@  matches the target, in this case libft.a
# $^  list all the files in prerequisite.
libft.a: $(SRCS)
	ar -rcs $@ $^

all: libft.a

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f libft.a

re: fclean all