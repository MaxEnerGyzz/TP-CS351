BIN = main
OBJECTS =  main.o matrice.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99

all :  $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

matrice.o : matrice.c
		$(CC) -c matrice.c -o matrice.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
