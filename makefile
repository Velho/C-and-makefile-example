# Created: Petri Pihla

# Date : 03.03.2022

CC=gcc
CFLAGS=-Wall -Wextra

.PHONY: all

all: final

final: main.o MY_strings.o
	$(CC) $(CFLAGS) main.o MY_strings.o -o final

main.o: main.h MY_strings.h
	$(CC) $(CFLAGS) -c main.c

MY_strings.o: main.h MY_strings.h
	$(CC) $(CFLAGS) -c MY_strings.c

clean:
	rm -f final.exe log.txt *.o
