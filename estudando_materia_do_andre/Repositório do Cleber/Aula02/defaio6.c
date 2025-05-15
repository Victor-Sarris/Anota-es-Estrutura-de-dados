//Requisitos:
//Usar a struct Pessoa com nome, idade, altura.

//Perguntar quantas pessoas o usuário quer cadastrar.

//Alocar dinamicamente o vetor de Pessoa.

//Preencher os dados usando um for.

//Após preencher:

//Calcular a média das idades.

//Encontrar a pessoa mais baixa.

//Exibir o nome, idade e altura dessa pessoa.

#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa{
    char nome[100];
    int idade;
    float altura;
} Pessoa; // nome da estrutura

int main(){
    int n = 0; // quantidade de pessoas vai cadastrar
    int i = 0;
    float media_idades = 0.0;
    int soma_idades = 0;
    int indice_mais_baixo = 0;

    printf("Quantas pessoas voce vai cadastrar?: \n");
    scanf("%d", &n);
    printf("Vamos cadastrar %d pessoas\n", n);

    Pessoa *pessoas = malloc(n * sizeof(Pessoa));

    for(i = 0; i < n; i++){
        printf("Insira seu nome: \n");
        scanf("%s", pessoas[i].nome);

        printf("Insira sua idade: \n");
        scanf("%d", &pessoas[i].idade);
        
        printf("Insira seu altura: \n");
        scanf("%f", &pessoas[i].altura);

        // calcular a media das idades
        soma_idades += pessoas[i].idade;

        // descobrir a pessoa mais baixa
        if(pessoas[i].altura < pessoas[indice_mais_baixo].altura){
            indice_mais_baixo = i;
        }
    }
    media_idades = soma_idades/n;
    printf("A media das idades e: %f\n", media_idades);
    
    Pessoa p = pessoas[indice_mais_baixo];
    printf("A pessoa mais baixa: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura); 

    free(pessoas);
}