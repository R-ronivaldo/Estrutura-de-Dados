#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

int main(void){
  TipoLista* list;
  list = InicializaLista();
  printf("lista vazia?: %i\n", Vazia(list));
  TipoItem* item; 
  item->valor = 12;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  TipoItem* item2; 
  item->valor = 10;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  TipoItem* item3; 
  item->valor = 20;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  TipoItem* item4; 
  item->valor = 8;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  TipoItem* item5; 
  item->valor = 6;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);


  TipoItem* item6; 
  item->valor = 4;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  TipoItem* item7; 
  item->valor = 40;
  printf("valor a ser inserido: %d\n", item->valor);
  Insere(item, list);

  
  printf("Imprimir a Lista\n");
  Imprime(list);

  bubble(list);
  //insertion(list);

  printf("Imprimir a Lista\n");
  Imprime(list);
}