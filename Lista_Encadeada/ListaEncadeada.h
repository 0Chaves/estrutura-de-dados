#include <stdbool.h>

struct lista{
	int dado;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* listaCriar();
Lista* listaInserir(Lista* l, int valor);
Lista* listaInserirOrdenado(Lista* l, int valor);
Lista* localiza (Lista* l, int valor);
Lista* listaRemover(Lista* l, int valor);
bool listaImprimir(Lista* l);
bool listaVazia(Lista* l);


