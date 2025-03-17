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
#define MAX_NOME 50 

// Estrutura do nó da árvore (cidade)
// O typedef permite criar um "apelido" para a estrutura, facilitando o uso dela.
// 'struct Cidade' agora pode ser chamada apenas de 'Cidade'.
typedef struct Cidade {
    char nome[50]; // Nome da cidade (string de até 49 caracteres + '\0')
    struct Cidade *esquerda; // Ponteiro referente a subárvore esquerda
    struct Cidade *direita; // Ponteiro referente a subárvore direita
    struct Evento *eventos[MAX_EVENTOS]; // Vetor de ponteiros para eventos
    int totalEventos; // Total de eventos cadastrados na cidade
} Cidade;


    // Função para criar uma nova cidade na árvore
    // Utiliza malloc para alocar memória dinamicamente e strcpy para copiar o nome fornecido
Cidade* novaCidade(char *nome) {
    Cidade* cidade = (Cidade*)malloc(sizeof(Cidade)); // malloc cria espaço na memória para essa cidade
    strcpy(cidade->nome, nome); // Copia o nome fornecido para o campo "nome" da estrutura
    cidade->esquerda = cidade->direita = NULL; // Inicializa as subárvores como NULL
    cidade->totalEventos = 0; // Inicializa o número de eventos como zero
    return cidade;
}

#endif