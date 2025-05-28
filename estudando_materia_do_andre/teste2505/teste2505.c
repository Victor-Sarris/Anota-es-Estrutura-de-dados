struct no{
    int conteudo;
    struct no* proximo;
};

typedef struct no No;

// sem nó cabeça 👇

void push(No** topo, int valor){
    No* novo = (No*)malloc(sizeof(No));
    novo->conteudo = valor;
    novo->proximo = *topo;
    *topo = novo;
}

// com nó cabeça 👇

void push(No** cabeca, int valor){
    No* novo = (No*) malloc(sizeof(No));
    novo->conteudo = valor;
    novo->proximo = cabeca->proximo;
    cabeca->proximo = novo;
}