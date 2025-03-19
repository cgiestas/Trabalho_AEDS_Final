#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h>
#include <stdbool.h>

#include "../include/arvore.h"
#include "../include/cidades.h"
#include "../include/eventos.h"

void ArmazenaCidades(char *Array_cidade){
    char *Array2_cidades[] = {"Joao Monlevade", "Nova Era", "Ipatinga", "Bela Vista", "Rio Piracicaba", "Itabira", "Sao Domingos do Prata", "Alvinopolis",
    "Ouro Preto", "Coronel Fabriciano", "Barao de Cocais", "Timoteo", "Mariana", "Caete", "Raposos", "Santa Luzia", "Rio Casca", "Ponte Nova", 
    "Lagoa Santa", "Vespasiano", "Santana do Paraiso", "Nova Lima", "Belo Horizonte"};

    int numCidades = sizeof(Array2_cidades) / sizeof(Array2_cidades[0]);//quantas cidades existem no array

    //gera um numero aleatorio entre 0 e numCidades - 1.
    //esse num aleatorio pega a cidade correspondente ao seu indice e copia de "Array_cidade" para "Array2_cidades" !!
    strncpy(Array_cidade, Array2_cidades[rand() % numCidades], 49);
    Array_cidade[49] = '\0'; 
}

void preencherCidades(TCidades cidade[]){
    for (int i = 0; i < MAX_CID; i++) {
        bool duplicado;
        
        do {
            duplicado = false;
            ArmazenaCidades(cidade[i].nome);
            
            for(int j = 0; j < i; j++){
                if(strcmp(cidade[i].nome, cidade[j].nome) == 0){
                    duplicado = true;
                    break;
                }
            }
        }while(duplicado);

        
        for (int j = 0; j < MAX_EVENTOS; j++) {
            bool dupliEvento;
            do{
                dupliEvento = false;
                ArmazenaEventos(cidade[i].eventos[j].nome);

                for(int k = 0; k < j; k++){
                    if (strcmp(cidade[i].eventos[j].nome, cidade[i].eventos[k].nome) == 0){
                        dupliEvento = true;
                        break;
                    }
                }
            }while(dupliEvento);
            cidade[i].eventos[j].avaliacao = (rand() % 101) / 10.0; 
        }
    }
}
