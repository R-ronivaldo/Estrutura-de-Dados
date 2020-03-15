#include <stdio.h>
#include <stdlib.h>
#include <lista.h>

int main(void){
  TipoLista* list;
  list = InicializaLista();
  printf("lista vazia?: %i\n", Vazia(list));
  TipoItem* item; 
  item->valor = 10;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);
  printf("lista vazia?: %i\n", Vazia(list));
  printf("Tamanho da lista: %i\n", Tamanho_lista(list));

  printf("consulta pelo valor: 10\n");
  Busca(10, list);
  printf("Imprimir a Lista\n");
  Imprime(list);
  printf("Remover na posicao: 0\n");
  Retira(0, list);
  printf("tamanho da lista: %i\n", Tamanho_lista(list));
}