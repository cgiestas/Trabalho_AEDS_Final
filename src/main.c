#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#include "../include/arvore.h"
#include "../include/eventos.h"
#include "../include/cidades.h"

int main(){
    srand(time(NULL));

    TCidades Cidades[MAX_CID];
    TArvore Arvore;
    Arvore.raiz = NULL;

    preencherCidades(Cidades);
    for (int i = 0; i < MAX_CID; i++) {
        TItem novoItem;
        novoItem.cidade = Cidades[i]; 
        Inserir(&Arvore.raiz, NULL, novoItem);

        printf("\nCidade: %s\n", Cidades[i].nome);
        printf("Eventos: \n");
        for (int j = 0; j < MAX_EVENTOS; j++)
        {
            printf(" %s - Nota: %.1f\n", Cidades[i].eventos[j].nome, Cidades[i].eventos[j].avaliacao);
        }
    }

    printf("arrasou diva");
}