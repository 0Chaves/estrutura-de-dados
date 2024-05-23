#DEFINE MAX 5
#include <stdbool.h>

typedef struct{
	int ini;
	int n;
	int vet[MAX];
}Fila;

Fila* filaCriar();
bool filaInserir(Fila* f, int valor);
bool filaRetirar(Fila* f, int* valor);
bool filaCheia(Fila* f);
bool filaVazia(Fila* f);
void filaLiberar(Fila *f);
