BIN = main
OBJECTS = graphlib.o dessiner.o main.o
CC = gcc
RM = rm -f
CFLAGS = -pedantic -Wall -ansi -lX11 -L/usr/include/X11 -std=c99

all : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BIN) $(CFLAGS)

graphlib.o : graphlib.c
	$(CC) -c graphlib.c -o graphlib.o $(CFLAGS)

dessiner.o : dessiner.c
	$(CC) -c dessiner.c -o dessiner.o $(CFLAGS)

main.o : main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

clean :
	$(RM) $(OBJECTS) $(BIN)
