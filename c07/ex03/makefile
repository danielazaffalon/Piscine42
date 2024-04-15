FLAGS = -Wall -Werror -Wextra

all: program

program: ft_ultimate_range.o
	cc -o program ft_ultimate_range.o

ft_ultimate_range.o: ft_ultimate_range.c
	cc -c $(FLAGS) ft_ultimate_range.c

fclean:
	rm -f program *.o
