BIN = main
OBJECTS =  main.o strings.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -std=c99 -lm

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

strings.o : strings.c
		$(CC) -c strings.c -o strings.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
