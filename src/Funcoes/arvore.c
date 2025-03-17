#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdbool.h>
#include "arvore.h"

// Função para inserir uma cidade na árvore
    // Segue a lógica de uma árvore binária de busca (BST), onde os elementos menores vão à esquerda e os maiores à direita
Cidade* inserirCidade(Cidade* raiz, char *nome) {
    if (raiz == NULL) { // Se não há raiz, essa será a primeira cidade
        return novaCidade(nome);
    }
    if (strcmp(nome, raiz->nome) < 0) { // Se o nome for menor, insere na subárvore esquerda
        raiz->esquerda = inserirCidade(raiz->esquerda, nome);
    } else { // Se for maior ou igual, insere na subárvore direita
        raiz->direita = inserirCidade(raiz->direita, nome);
    }
    return raiz;
}

void exibirCidades(Cidade* raiz) {
    if (raiz != NULL) {
        exibirCidades(raiz->esquerda);
        printf("- %s\n", raiz->nome);
        exibirCidades(raiz->direita);
    }
}