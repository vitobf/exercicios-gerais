all: geraos geraa geramain

geraos: matrix_utils.c
	gcc -c matrix_utils.c

geraa: matrix_utils.o
	ar rcs libmatrix_utils.a matrix_utils.o

geramain: main.c libmatrix_utils.a 
	gcc main.c -o main -L. -lmatrix_utils

clear: 
	rm -rf *.o main