CFLAGS = -Wall -Werror -Wextra
OBJS = main.o first.o second.o
BINARY = program

#Variables Expansion Recursiva: almacena la referencia a la otra variable
#Variables Expansion Simple: En el instante en que la anuncio
x = Hola
#Variable Explansion Recursiva: Almacena la referencia a la otra vairiable.
y = $(x) Adios #Imprime Adios Adios
#Variables Expansion Simple: Almacena el valor en el instante en que la anuncio.
z := $(x) Adios #Imprime Hola Adios
x = Adios

all: program

#Esta regla compila el programa principal
#program: main.o first.o second.o
$(BINARY): $(OBJS)
	cc -o $@ $?
#cc -o $(BINARY) $(OBJS)
#cc -o programa main.o first.o second.o

#carpeta1/%.o: carpeta2/%.c
%.o: %.c
	cc $(CFLAGS) -c $< -o $@

#10.5 Variables y patrone
#$<: el primero de los prerrequisitos
#$?: todos los prerequisitos
#$@: Nombre del Objetivo

#main.o: main.c header.h #Regla implicita: Ya sabe compilar .c
#cc $(CFLAGS) -c main.c
#cc -c main.c

#first.o: first.c header.h #Regla Implicita
#cc $(CFLAGS) -c first.c
#cc -c first.c

#second.o: second.c header.h #Regla Implicita
#cc $(CFLAGS) -c second.c
#cc -c second.c

fprint:
	@echo $(x)
	@echo $(y)
	@echo $(z)

clean:
	@rm -f $(BINARY) $(OBJS)
#rm -f programa *.o
