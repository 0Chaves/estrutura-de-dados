#DEFINE MAX 10
#include <stdbool.h>

typedef struct{
	int n;
	int vet[MAX];
}Pilha;

Pilha* pilhaCriar();
bool pilhaInserir(Pilha* p, int v);
int pilhaRetirar(Pilha* p);
bool pilhaCheia(Pilha* p);
bool pilhaVazia(Pilha* p);
void pilhaLiberar(Pilha* p);
