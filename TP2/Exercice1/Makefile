BIN = main
OBJECTS =  main.o jeuMulti.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

jeuMulti.o : jeuMulti.c
		$(CC) -c jeuMulti.c -o jeuMulti.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
