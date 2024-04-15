FLAGS = -Wall -Werror -Wextra
all: program

program: ft_range.o
	cc -o  program ft_range.o

ft_ultimate_range.o: ft_range.c
	cc -c $(FLAGS) ft_range.c

fclean:
	@rm -f program *.o
