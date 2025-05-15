//Usar a struct Pessoa com nome, idade, altura.

//Perguntar quantas pessoas o usuário quer cadastrar.

//Alocar dinamicamente o vetor de Pessoa.

//Preencher os dados usando um for.

//Após preencher:

//Calcular a média das alturas.

//Exibir o nome, idade e altura das pessoas acima da média.

#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa{
    char nome[100];
    int idade;
    float altura;
} Pessoa; // nome da estrutura

int main(){
    int n = 0;
    int i = 0;
    float soma_alturas = 0.0;

    printf("Quantas pessoas você quer cadastrar?\n");
    scanf("%d", n);
    printf("Vamos cadastrar %d pessoas\n", n);

    //iniciar a alocação de memoria
    Pessoa *pessoas = malloc(n * sizeof(Pessoa));
    
    // looping 
    for(i = 0; i < n; i++){
        printf("Insira seu nome: \n");
        scanf("%s99", pessoas[i].nome);

        printf("Insira sua idade: \n");
        scanf("%d", &pessoas[i].idade);

        printf("Insira sua altura: \n");
        scanf("%f", &pessoas[i].altura);

        // somar a medida das alturas
        soma_alturas += pessoas[i].altura;
    }
    float media = soma_alturas / n;
    printf("A media das alturas e: %f", media);

    for( i = 0; i < n; i++)
    {
        printf("Essa pessoa esta acima da media: %s", pessoas[i].nome);
    }

    free(pessoas);
}
