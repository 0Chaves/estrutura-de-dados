typedef struct lista{
	int dado;
	struct lista* ant;
	struct lista* prox;
}Lista;

Lista* insere(Lista* L, int v);
