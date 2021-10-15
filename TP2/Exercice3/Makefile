BIN = main
OBJECTS = fonctions_math.o main.o pgcd.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99

all :  $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

fonctions_math.o : fonctions_math.c
	$(CC) -c fonctions_math.c -o fonctions_math.o $(CFLAGS)

pgcd.o : pgcd.c
	$(CC) -c pgcd.c -o pgcd.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
