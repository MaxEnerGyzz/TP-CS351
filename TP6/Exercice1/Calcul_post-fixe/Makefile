BIN = main
OBJECTS =  main.o listeTableau.o
CC = gcc
RM = rm -f
CFLAGS = -g -pedantic -Wall -ansi -std=c99 

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

listeTableau.o : listeTableau.c
		$(CC) -c listeTableau.c -o listeTableau.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
