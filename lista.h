#ifndef LISTA1_H_INCLUDED
#define LISTA1_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "produto.h"
typedef struct Celula
{
    Produto dado;
    struct Celula *prox;
} Celula;
typedef struct Lista
{
    Celula *inicio;
    Celula *fim;
    int tam;
} Lista;

void create_lista(Lista *l)
{

    Celula *tmp = (Celula *)malloc(sizeof(Celula));
    tmp->prox = NULL;

    l->inicio = tmp;
    l->fim = tmp;
    l->tam = 0;
}

#endif // FILA_H_INCLUDED