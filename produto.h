#define PRODUTO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

void print_produto(Produto p)
{
    printf("codigo: %d, descricao: %s, valor: %f, quantidade: %d\n",
           p.codigo, p.descricao, p.valor, p.quantidade);
}

Produto novo_produto()
{
    Produto p;
    p.codigo = rand() % 1000;
    sprintf(p.descricao, "Produto %d", p.codigo);
    p.valor = rand() % 100;
    p.quantidade = 10;
    return p;
}