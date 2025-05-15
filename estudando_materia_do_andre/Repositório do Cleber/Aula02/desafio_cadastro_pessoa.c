#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa *pessoa;  // ponteiro para struct Pessoa
    pessoa = malloc(sizeof(Pessoa)); // alocação dinâmica

    if (pessoa == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Insira o seu nome:\n");
    scanf("%s", pessoa->nome);

    printf("Insira sua idade:\n");
    scanf("%d", &pessoa->idade);

    printf("Insira sua altura:\n");
    scanf("%f", &pessoa->altura);

    // exibindo os dados inseridos
    printf("\n--- Exibindo os dados inseridos ---\n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
    printf("Altura: %.2f\n", pessoa->altura);

    free(pessoa); // libera a memória alocada

    return 0;
}
