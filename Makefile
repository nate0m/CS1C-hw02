CC = g++

all: hw02

hw02: deck.o hw02.cpp hw02.h
	$(CC) hw02.cpp -o hw02 deck.o

deck.o: deck.cpp hw02.h
	$(CC) -c deck.cpp -o deck.o

clean: 
	rm hw02 *.o

tar:
	tar cf hw02.tar hw02.src Makefile hw02.cpp hw02.h deck.cpp 
