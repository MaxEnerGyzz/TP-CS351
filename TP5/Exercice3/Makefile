BIN = main
OBJECTS =  main.o pile.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

pile.o : pile.c
		$(CC) -c pile.c -o pile.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
