#include "../../include/arvore.h"

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h>
#include <stdbool.h>

void ArmazenaCidades(char *Array_cidade){
    char *Array2_cidades[] = {"Joao Monlevade", "Nova Era", "Ipatinga", "Bela Vista", "Rio Piracicaba", "Itabira", "Sao Domingos do Prata", "Alvinopolis",
    "Ouro Preto", "Coronel Fabriciano", "Barao de Cocais", "Timoteo", "Mariana", "Caete", "Raposos", "Santa Luzia", "Rio Casca", "Ponte Nova", 
    "Lagoa Santa", "Vespasiano", "Santana do Paraiso", "Nova Lima", "Belo Horizonte"};

    int numCidades = sizeof(Array2_cidades) / sizeof(Array_cidade[0]);//quantas cidades existem no array

    //gera um numero aleatorio entre 0 e numCidades - 1.
    //esse num aleatorio pega a cidade correspondente ao seu indice e copia de "cidades" para "Cidade" !!
    strcpy(Array_cidade, Array2_cidades[rand() % numCidades]); 
}

Cidade* preencherCidades() {
    Cidade *raiz = NULL; // Inicializa a raiz da árvore
    char nome[MAX_NOME]; // Buffer para armazenar nomes gerados

    for (int i = 0; i < MAX_CID; i++) {
        bool duplicado;
        
        do {
            duplicado = false;
            Armazenar_Cidades(nome); // Sorteia uma cidade
            
            // Verifica se a cidade já está na árvore antes de inserir
            Cidade *aux = raiz;
            while (aux != NULL) {
                if (strcmp(aux->nome, nome) == 0) {
                    duplicado = true; // Se já existir, sorteia de novo
                    break;
                }
                if (strcmp(nome, aux->nome) < 0)
                    aux = aux->esquerda;
                else
                    aux = aux->direita;
            }
        } while (duplicado);

        // Insere a cidade na árvore
        raiz = inserirCidade(raiz, nome);
    }

    return raiz; // Retorna a raiz da árvore
}
