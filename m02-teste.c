#include <stdio.h>
#include <assert.h>
#include "lista.h"
#include "produto.h"

int main(){
  Lista estoque;

  newLista(&estoque);
  add_lista_end(&estoque, novo_produto());
  
  assert(estoque.tam == 1);
}