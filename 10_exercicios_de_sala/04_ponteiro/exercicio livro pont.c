#include <stdio.h>

#define MAX_STRING 100

typedef struct
{
    char titulo[MAX_STRING];
    char autor[MAX_STRING];
    int edicao;
    int numero_paginas;
} tLivro;

void leLivro (tLivro *livro) {
    fgets (livro->titulo, MAX_STRING, stdin);
    fgets (livro->autor, MAX_STRING, stdin);
    scanf("%d %d", &livro->edicao, &livro->numero_paginas);
}

int main()
{
    tLivro livro;
    leLivro(&livro);
    printf("Nome: %s", livro.titulo);
    printf("Autor: %s", livro.autor);
    printf("Edição: %d\n", livro.edicao);
    printf("Número de páginas: %dp\n", livro.numero_paginas);
    return 0;
}