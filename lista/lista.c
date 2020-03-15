#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* Inicializa uma lista */
TipoLista* InicializaLista(){
  TipoLista* lista = (TipoLista*)malloc(sizeof(TipoLista));
  return lista;
}

/* Faz a lista ficar vazia */
void FLVazia (TipoLista* Lista) {
  Lista->Primeiro = InicioVetor;
  Lista->Ultimo = Lista->Primeiro; 
}

/*Verifica se a lista está vazia*/
int Vazia (TipoLista* Lista){
  return (Lista->Primeiro == Lista->Ultimo); 
}

/* Insere x após o último elemento da lista */
void Insere (TipoItem* x, TipoLista *Lista) {
  if (Lista ->Ultimo >= MaxTam)
    printf ("Lista está cheia\n");
  else{ 
    Lista ->Item[Lista->Ultimo] = *x; 
    Lista->Ultimo++;
  } 
}

TipoItem* Busca(int chave, TipoLista* lista){
  for(int i = 0; i < lista->Ultimo; i++){
    if(lista->Item[i].valor == chave){
      printf("Item existe\n");
      return &lista->Item[i];
    }else{
      printf("Item não encontrado\n");
      return NULL;
    }
  }
  return NULL;
}

int Tamanho_lista(TipoLista* Lista){
  if (Lista == NULL)
    return -1;
  else 
    return Lista->Ultimo;
}

TipoItem* Retira (Posicao p, TipoLista* Lista) {
  int Aux; 
  TipoItem* item;
  item = (TipoItem*) malloc(sizeof(TipoItem)); 
  if (Vazia(Lista) || p >= Lista->Ultimo){
    printf ("A posição não existe!\n");
    return NULL; 
  }
  *item = Lista->Item[p]; 
  Lista->Ultimo--; 
  for (Aux = p; Aux < Lista->Ultimo; Aux++)
    Lista->Item[Aux] = Lista->Item[Aux+1]; 
  return item;
}

/*Imprime os itens da lista na ordem de ocorrência */ void Imprime (TipoLista* Lista){
  printf("p - key\n");
  for (int Aux = Lista->Primeiro; Aux < Lista->Ultimo; Aux++){
    printf ("%d - %d\n", Aux, Lista->Item[Aux].valor);
  } 
}