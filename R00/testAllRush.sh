find rush0*.c -exec printf "\n\n ===== {} ===== \n\n" \; -exec gcc -Wall -Werror -Wextra {} main.c ft_putchar.c \; -exec ./a.out \;
