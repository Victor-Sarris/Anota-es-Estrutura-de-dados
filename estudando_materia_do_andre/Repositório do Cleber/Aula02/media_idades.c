// requisitos: 
//Use a mesma struct Pessoa com:
//char nome[100];
//int idade;
//float altura;
//Peça ao usuário quantas pessoas deseja cadastrar.

//Alocar dinamicamente um vetor de Pessoa.

//Use um for para:

//Preencher os dados de cada pessoa.

//Calcular a soma das idades ao mesmo tempo.

//Exiba a média das idades ao final com duas casas decimais.

//Libere a memória com free.

#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
} Pessoa; // nome da estrutura

int main(){
    int n;
    int i;
    int soma_idades = 0;

    
    printf("Quantas pessoas voce quer cadastrar?\n");
    scanf("%d", &n);
    printf("Cadastrando %d pessoas!\n", n);

    Pessoa *pessoas = malloc(n * sizeof(Pessoa));

    for(i = 0; i < n; i++){

        printf("Insira seu nome:\n");
        scanf("%s", pessoas[i].nome);

        printf("Insira sua idade:\n");
        scanf("%d", &pessoas[i].idade);
        

        printf("Insira sua altura:\n");
        scanf("%f", &pessoas[i].altura);

        soma_idades += pessoas[i].idade;
    }

    // calcular e mostrar a media
    float media = (float)soma_idades/n;
    printf("\n a media das idades é: %f", media);

    free(pessoas);


    
}