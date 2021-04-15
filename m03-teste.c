#include <stdio.h>
#include <assert.h>
#include "lista.h"
#include "produto.h"

int main(){
  Lista estoque;
  Produto p = novo_produto();
  newLista(&estoque);
  add_lista_end(&estoque, novo_produto());
  add_lista_end(&estoque, novo_produto());
  add_lista(&estoque, p);

  assert(estoque.inicio->dado.valor == p.valor);
}