//Use a mesma struct Pessoa (nome, idade, altura).

//Peça ao usuário quantas pessoas deseja cadastrar.

//Alocar dinamicamente um vetor de Pessoa.

//Preencher os dados com um for.

//Após preencher, o programa deve:

//Encontrar a pessoa com maior idade.

//Exibir o nome, idade e altura dessa pessoa.





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
    int indice_mais_velho = 0;


    printf("Quantos usuarios voce quer cadastrar?\n");
    scanf("%d", &n);
    printf("Vamos cadastrar %d pessoas\n", n);

    Pessoa *pessoas = malloc(n * sizeof(Pessoa));

    for(i = 0; i < n; i++){
        printf("Pessoa %i \n", i);
        printf("Insira seu nome:\n");
        scanf("%s", pessoas[i].nome);

        printf("Insira sua idade:\n");
        scanf("%d", &pessoas[i].idade);

        printf("Insira sua altura:\n");
        scanf("%f", &pessoas[i].altura);

        if(pessoas[i].idade > pessoas[indice_mais_velho].idade){
            indice_mais_velho = i;
        }
    }
    

    Pessoa p = pessoas[indice_mais_velho];
    printf("A pessoa mais velha é: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %f\n", p.altura);

    free(pessoas); //libera a alocação de memoria

}