#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

Pilha* pilhaCriar(){
	Pilha* temp = (Pilha*) malloc (sizeof(Pilha));
	if(temp == NULL){
		return NULL;
	}
	temp->n = 0;
	return temp;
}

bool pilhaInserir(Pilha* p, int v){
	if(!pilhaCheia(p)){
		p->vet[p->n] = v;
		p->n++;
		return true;
	}
	return false;
}

bool pilhaRetirar(Pilha* p, int* v){
	if(!pilhaVazia(p)){
		*v = p->vet[p->n-1];
		p->n--;
		return true;
	}
	return false;
}

bool pilhaCheia(Pilha* p){
	if(p->n == MAX){
		return true;
	}
	return false;
}

bool pilhaVazia(Pilha* p){
	if(p->n == 0){
		return true;
	}
	return false;
}

void pilhaLiberar(Pilha* p){
	free(p);
}

