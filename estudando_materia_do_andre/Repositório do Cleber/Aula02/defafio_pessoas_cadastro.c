#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    char nome[100];
    int idade;
    float altura;
} Pessoa; //nome da estrutura


int main(){
    int n;
    
    printf("Quantos usuarios deseja cadastrar: \n");
    scanf("%d", &n);
    printf("Cadastrar %d pessoas.\n", n);

    Pessoa *pessoas = malloc(n * sizeof(Pessoa));  //ponteiro para struct
    // no caso,  aqui 👆 ele faz alocação de forma local, ou seja, para ser chamada, podemos apenas usar o "." ao invés do "->" que seria no caso de ponteiro de ponteiro



    for(int i = 0; i < n; i++){
        printf("Insira o seu nome:\n");
        scanf("%s", pessoas[i].nome);
        printf("Insira sua idade:\n");
        scanf("%d", &pessoas[i].idade);
        printf("Insira a sua altura:\n");
        scanf("%f", &pessoas[i].altura);
    }

        // Exibindo os dados cadastrados
    printf("\nDados cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %.2f\n\n", pessoas[i].altura);
    }

    free(pessoas);
}