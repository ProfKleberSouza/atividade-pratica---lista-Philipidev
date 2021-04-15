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

void newLista(Lista *l)
{
    Celula *tmp = newCelula();

    l->inicio = tmp;
    l->fim = tmp;
    l->tam = 0;
}

void add_lista(Lista *l, Produto p) {
  Celula *temp = (Celula*)malloc(sizeof(Celula));
  temp->dado = p;

  if(l->inicio == NULL) {
    temp->prox = NULL;
    l->inicio = temp;
    l->fim = temp;
  } else {
    temp->prox = l->inicio;
    l->inicio = temp;
  }

  l->tam++;
}

void add_lista_end(Lista *l, Produto p)
{
    Celula *nova = newCelula();

    nova->dado = p;

    l->fim->prox = nova;
    l->fim = nova;
    l->tam++;
}

int tamnhoLista(Lista *l)
{
    return l->tam;
}

void print_lista(Lista *l)
{
    Celula *tmp = l->inicio->prox;

    while (tmp != NULL)
    {
        print_produto(tmp->dado);
        tmp = tmp->prox;
    }
}

#endif // FILA_H_INCLUDED