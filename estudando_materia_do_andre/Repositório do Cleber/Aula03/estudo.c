#include <stdio.h>
#include <stdlib.h>

struct no {
    int conteudo;
    struct no *proximo;
};
typedef struct no No;

void inserir(int x, No *ini){
    No *novo = malloc(sizeof(No));
    novo->conteudo = x;
    novo->proximo = ini->proximo;
    ini->proximo = novo;
}

void exibir(No *ini){
    No *p;
    for(p = ini->proximo; p != NULL; p = p->proximo){
        printf("%d ", p->conteudo);
    }
    printf("\n");
}

int main(){
    // Criando o nó cabeçalho
    No *inicio = malloc(sizeof(No));
    inicio->proximo = NULL;

    inserir(5, inicio);
    inserir(3, inicio);
    inserir(8, inicio);

    exibir(inicio); // Saída esperada: 8 3 5 (inserção no início)

    free(inicio); // Lembre-se de liberar memória alocada
    return 0;
}
