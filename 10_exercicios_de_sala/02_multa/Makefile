all: geraos geramain

geraos: multa.c main.c
	gcc -c multa.c main.c

geramain: multa.o main.o
	gcc multa.o main.o -o main -lm

clean: 
	rm -rf *.o main