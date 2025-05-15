#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Produto{ // aqui no caso a gente está fazendo a criação de uma estrutura
    char nome[50];
    int quantidade;
    float preco;

    struct Produto * proximo; //  é um ponteiro que aponta para o próximo produto da lista. Isso é o que torna a lista encadeada.
} Produto;

Produto * inserirProduto(Produto *inicio, char nome[], int quantidade, float preco){
    Produto *novo = malloc(sizeof(Produto));

    // preenche os dados
    strcpy(novo->nome, nome);
    novo->quantidade = quantidade;
    novo->preco = preco;

    // aponta para o antigo inicio
    novo->proximo = inicio;

    return novo;
}

void exibirProdutos(Produto *inicio){
    Produto *p = inicio;
    while(p != NULL){
        printf("Produto: %s | Quantidade: %d | Preço: R$ %.2f\n", p->nome, p->quantidade, p->preco);
        p = p->proximo;
    }
}

int main(){
    Produto *inicio = NULL;

    inicio = inserirProduto(inicio, "Arroz", 1, 23.40);
    inicio = inserirProduto(inicio, "Feijao", 5, 7.49);
    inicio = inserirProduto(inicio, "Macarrao", 8, 4.25);

    printf("Lista de Produtos:\n");
    exibirProdutos(inicio);

    return 0;
}



