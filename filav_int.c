#define N 5
static int fila[N];
static int p, u;


//Criação da fila 

typedef struct {
    int fila [N];
    int p, u;

}fila;

//Inicialização

void cria_fila(fila *f){
    f -> p = 0;
    f -> u = 0;
}

//Inserir 

void enfileira (fila *f, int x){
    f -> fila[f -> u++] = x;
}

//Remover

int desenfileira (fila *f){
    return f -> fila[f -> p++];
}

//Fila cheia 

int fila_cheia (fila *f){
    if ( f->u == N){
        return 1;
    }
    return 0;
}

//Fila vazia 

int fila_vazia (fila *f){
    if (f->p == f->u){
        f->p = 0;
        f->u = 0;
        return 1;
    }

    return 0;

}

//Imprimir fila

void imprime_fila(fila *f){
for (int i = f->p; i = f->u;i++){
    printf("%d ", f->fila[i]);
}
}
