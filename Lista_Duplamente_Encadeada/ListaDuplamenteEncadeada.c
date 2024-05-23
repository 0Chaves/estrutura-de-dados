#include <stdio.h>
#include <stdlib.h>
#include "ListaDuplamenteEncadeada.h"

Lista* insere(Lista* L, int valor){
	Lista* novoNo = (Lista*) malloc (sizeof(Lista));
	novoNo->dado = valor;
	novoNo->prox = L;
	novoNo->ant = NULL;
	if(L != NULL) L->ant = novoNo;
	
	return novoNo;
}

Lista* buscar(Lista* L, int valor){
	Lista* busca;
	for(busca=l; busca != NULL; busca->prox){
		if(busca->dado == valor){
			return busca;
		}
	}
	return NULL;
}

Lista* retirar(Lista* l, int valor){
	Lista* p = buscar(l, valor);
	
}

Lista* insere_ordenado(Lista* L, int valor){
	
}

Lista* localiza_anterior(Lista* L, int valor){
	if (L == NULL) return NULL;
}
