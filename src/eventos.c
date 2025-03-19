#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../include/eventos.h"
#include "../include/arvore.h"
#include "../include/cidades.h"
 
void ArmazenaEventos(char *Array_evento){
    char *Array2_eventos[] = {
        "Show de Rock", "Festa Junina", "Festival Gastonomico", "Feira de Artesanato", "Show de comedia", "Show do Oruam", "Eras Tour da Taylor Siwft",
        "Campeonato de E-Sports", "Campeonato de Futebol", "Campeonato de LoL", "Teatro ao ar livre", "Aula de Yoga ao ar livre", "Cinema ao ar livre",
        "Exposicao de arte", "Festival natalino", "Halloween", "Festival de Pascoa", "Missa de domingo", "Palestra Motivacional", "Palestra sobre aquecimento global",
        "Campeonato de Robotica" 
    };
    int numEventos = sizeof(Array2_eventos) / sizeof(Array2_eventos[0]);
    
    strcpy(Array_evento, Array2_eventos[rand() % numEventos]);
}

/*void preencherEventos(TCidades cidade[]){
    bool dupliEventos;

    for(int i = 0; i < MAX_EVENTOS; i++){
        do{
            dupliEventos = false;
            for(int j = 0; j < i; j++){
                ArmazenaEventos(cidade[i].eventos[j].nome);
                if(strcmp(cidade[i].eventos[j].nome, cidade[i].eventos[j--].nome) == 0){
                    dupliEventos = true;
                    break;
                }
                cidade[i].eventos[j].avaliacao = (rand() % 101) / 10.0;
            }
        }while(dupliEventos);
    }
    
}*/