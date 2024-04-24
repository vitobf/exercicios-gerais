all: geraos geramain

geraos: esfera_utils.c main.c
	gcc -c esfera_utils.c main.c 

geramain: esfera_utils.o main.o
	gcc esfera_utils.o main.o -o main -lm

clean: 
	rm -rf *.o main