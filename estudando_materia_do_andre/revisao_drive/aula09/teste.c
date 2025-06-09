#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"
#include "metodos.c"

int main(){
    Celula *lista;
    lista = malloc(sizeof(Celula));
    lista->prox = NULL;
    inserir(3, lista);
    printf("\nElementos da lista: \n");
    exibir(lista);
}