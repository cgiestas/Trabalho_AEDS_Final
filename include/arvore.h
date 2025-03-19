#ifndef ARVORE_H
#define ARVORE_H

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdbool.h>
#include "eventos.h"

#define MAX_EVENTOS 10 // O número máximo de eventos que cada cidade pode ter é 10
#define MAX_CID 5 // o numero máximo de cidades a serem geradas por execução é 5

typedef struct cidade{
    char nome[50];
    TEvento eventos[MAX_EVENTOS];
}TCidades;

//o item é o elemento a ser adicionado na arvore
typedef struct item{
    TCidades cidade;
}TItem;

//a célula contem o item(ex: nome de uma cidade), um ponteiro pai, esquerda e direita, e os eventos
//esses três ponteiros o ligam a outros elementos na árvore
typedef struct celula{
    TItem item;
    struct celula *pai;
    struct celula *esq;
    struct celula *dir;
}TCelula;

//estrutura da árvore e sua raiz
typedef struct arvore{
    TCelula *raiz;
}TArvore;

#endif