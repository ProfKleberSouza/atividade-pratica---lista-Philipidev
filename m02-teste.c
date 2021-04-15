#include <stdio.h>
#include <assert.h>
#include "lista.h"
#include "produto.h"

int main(){
  Lista estoque;

  newLista(&estoque);
  Produto p = novo_produto();
  add_lista_end(&estoque, p);
  
  assert(estoque.fim->dado.valor == p.valor);
}