#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


PONT inicializar(){
  return(NULL);
}

PONT adicionar(PONT raiz, PONT no){
	if (raiz == NULL) return(no);
	if (no->chave < raiz->chave)
		raiz->esq = adicionar(raiz->esq, no);
	else
		raiz->dir = adicionar(raiz->dir, no);
	
	return(raiz);
}

PONT criarNo(TIPOCHAVE ch){
	PONT novoNo = (PONT)malloc(sizeof(NO));
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	novoNo->chave = ch;
	
	return(novoNo);
}

PONT buscarNo(PONT raiz, TIPOCHAVE ch, PONT *pai){
	PONT atual = raiz;
	*pai = NULL;
	while (atual) {
		if (atual->chave == ch) return (atual);
		*pai = atual;
		if (ch < atual->chave) atual = atual->esq;
		else atual = atual->dir;
	}
	return(NULL);
}

PONT removerNo(PONT raiz, TIPOCHAVE ch){
	PONT pai, no, aux, aux2;
	no = buscarNo(raiz,ch,&pai);
	if (no==NULL) return(raiz);
	if (!no->esq || !no->dir){
		if (!no->esq) aux2 = no->dir;
		else aux2 = no->esq;
	}
	else {
		aux = no;
		aux2 = no->esq;
		
		while (aux2->dir) {
			aux = aux2;
			aux2 = aux2->dir;
		}
		
		if (aux != no){
			aux->dir = aux2->esq;
			aux2->esq = no->esq;
		}
		aux2->dir = no->dir;
	}
	if (!pai) {
		free(no);
		return(aux2);
	}
	if (ch < pai->chave) pai->esq = aux2;
	else pai->dir = aux2;
	free(no);
	return(raiz);
	
	}
	

PONT buscar(TIPOCHAVE ch, PONT raiz){
	if (raiz == NULL) return(NULL);
	if (raiz->chave == ch) return(raiz);
	if (raiz->chave > ch)
		return(buscar(ch,raiz->esq));
	return(buscar(ch,raiz->dir));
}

int contNo(PONT raiz){
	if (!raiz) return 0;
	return(contNo(raiz->esq) + 1 + contNo(raiz->dir));
}

int somaEle(PONT raiz){
   int soma;
   if (raiz != NULL)
	{
	soma=somaEle(raiz->esq)+somaEle(raiz->dir)+raiz->chave;
	return soma;
	}
	else
	return 0;
}

double mediaEle(PONT raiz){
	double media;
	int soma, cont;
	if (raiz != NULL){
		soma = somaEle(raiz);
		cont = contNo(raiz);
	
		printf ("\n");
		printf ("A media da arvore: %d", (soma/cont));
		printf ("\n");
	}
}

int contFilhos(PONT raiz) {
    int cont1=0,soma=0;

    if(!raiz) return(0);

    if(raiz->esq != NULL && raiz->dir != NULL) 
    return (contFilhos(raiz->esq) + 1 + contFilhos(raiz->dir));

    return (contFilhos(raiz->esq) + 0 + contFilhos(raiz->dir)); 
}

int contFolhas(PONT raiz){
    if(raiz == NULL) return(0);
    if((raiz->esq) == NULL && (raiz->dir) == NULL) 
    return (1);

    return (contFolhas(raiz->esq) + contFolhas(raiz->dir)); 
}

int maior(PONT raiz)
{
      PONT nav = raiz;
    while (nav->dir != NULL) {
        nav = nav->dir;
    }
    return nav->chave;
}

int menor(PONT raiz)
{
      PONT nav = raiz;
    while (nav->esq != NULL) {
        nav = nav->esq;
    }
    return nav->chave;
}

int altura(PONT raiz) {
if (raiz == NULL)
return -1;
else {
int he = altura (raiz->esq);
int hd = altura (raiz->dir);
if (he < hd) return hd + 1;
else return he + 1;
}
}

// LEITURAS

void preOrdem(PONT raiz) {
if (raiz != NULL) {
printf (" %d -", raiz->chave) ;
preOrdem(raiz->esq) ;
preOrdem(raiz->dir) ;
}
}

void posOrdem(PONT raiz) {
if (raiz != NULL) {
posOrdem (raiz->esq) ;
posOrdem (raiz->dir) ;
printf (" %d -", raiz->chave) ;
}
}

void emOrdem(PONT raiz) {
if (raiz != NULL) {
emOrdem(raiz->esq) ;
printf (" %d -", raiz->chave) ;
emOrdem(raiz->dir) ;
}
}