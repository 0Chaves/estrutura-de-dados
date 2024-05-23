#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"


Lista* listaCriar(){
	return NULL;
}
Lista* listaInserir(Lista* l, int valor){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->dado = valor;
	novo->prox = l;
	return novo;
}
Lista* listaInserirOrdenado(Lista* l, int valor){
	Lista* anterior = localiza(l, valor);
	Lista* novo = malloc(sizeof(Lista));
	novo->dado = valor;
	novo->prox = anterior->prox;
	anterior->prox = novo;
	return l;
}
Lista* localiza (Lista* l, int valor){
	Lista* atual = l;
	Lista* anterior = NULL;
	while(atual != NULL && atual->dado<valor){
		anterior = atual;
		atual = atual->prox;
	}
	return anterior;
}
Lista* listaRemover(Lista* l, int valor){
	
}
bool listaImprimir(Lista* l);
bool listaVazia(Lista* l);
