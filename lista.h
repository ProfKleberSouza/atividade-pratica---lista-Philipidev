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

Celula *newCelula()
{
    Celula *tmp = (Celula *)malloc(sizeof(Celula));
    tmp->prox = NULL;
    return tmp;
}

void create_lista(Lista *l)
{
    Celula *tmp = newCelula();

    l->inicio = tmp;
    l->fim = tmp;
    l->tam = 0;
}

bool add_lista_end(Lista *l, Produto p)
{
    Celula *nova = newCelula();

    nova->dado = p;

    l->fim->prox = nova;
    l->fim = nova;
    l->tam++;

    return true;
}

#endif // FILA_H_INCLUDED