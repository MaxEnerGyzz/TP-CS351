BIN = main
OBJECTS =  main.o divers.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

divers.o : divers.c
		$(CC) -c divers.c -o divers.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
