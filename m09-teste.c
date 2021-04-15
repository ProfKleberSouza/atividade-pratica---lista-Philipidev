#include <stdio.h>
#include <assert.h>
#include "lista.h"
#include "produto.h"

int main(){
  Lista estoque;

  newLista(&estoque);

  for(int i=0;i<10;i++){
    add_lista_end(&estoque, novo_produto());
  }

  print_lista(&estoque);
}