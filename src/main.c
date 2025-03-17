#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include "../include/arvore.h"
#include "../include/eventos.h"





//inserir cidades manualmente, já que não será fornecido input do usuário nessa parte

//função para criar eventos e avaliações aleatórias
// a função básica de aleatoriedade não tava aleatória o suficiente, então fiz uma melhor
/*float GeraAleatorio(const float min, const float max, const int  quantidade)
{
    float numAleatorio = 0;

    for (int i = 0; i < quantidade; i++){
        numAleatorio = (rand() / (float)RAND_MAX) * (max - min) + min;
        printf("%.1f ", numAleatorio);
    }
    printf("\n");
}

int main()
{
    Evento *eventos;
    srand(time(NULL)); //inicializa a função random com a seed do tempo para garantir aleatoriedeade
    //ou seja, multiplica os numeros aleatorios pelo horario atual, garantindo que os valores sejam sempre diferentes

    //atribui o resultado da função de num aleatório à avaliação
    eventos ->avaliacao = GeraAleatorio(0.0,10.0,1);
}*/

int main(){
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    // Gera a árvore de cidades sem repetição
    Cidade *raiz = preencherCidades();
    // Exibe as cidades em ordem alfabética
    printf("\nCidades sorteadas (em ordem alfabética):\n");
    exibirCidades(raiz);

    return 0;
}