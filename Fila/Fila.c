#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila* filaCriar(){
	Fila* temp = (Fila*) malloc (sizeof(Fila));
	if(temp == NULL){
		return NULL;
	}
	temp->n = 0;
	temp->ini = 0;
	return temp;
}
bool filaInserir(Fila* f, int valor){
	if(!filaCheia(f)){
		int posicao = (f->ini + f->n) % MAX;
		f->vet[posicao] = valor;
		f->n;
		return true;
	}
	return false;
}
bool filaRetirar(Fila* f, int* valor){
	if(!filaVazia(f)){
		int incremento = (f->ini + 1) % MAX;
		*valor = f->vet[f->ini];
		f->ini = incremento;
		f->n--;
		return true;
	}
	return false;
}
bool filaCheia(Fila* f){
	if(f->n == MAX){
		return true;
	}
	return false;
}
bool filaVazia(Fila* f){
	if(f->n == 0){
		return true;
	}
	return false;
}
void filaLiberar(Fila *f){
	free(f);
}
