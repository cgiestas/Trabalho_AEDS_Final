#ifndef EVENTOS_H
#define EVENTOS_H

 // Estrutura para armazenar eventos
 typedef struct evento {
    char nome[50]; // Nome do evento
    float avaliacao; // Avaliação do evento (de 0.0 a 10.0)
}TEvento;

void ArmazenaEventos(char *Array_evento);
//void preencherEventos(TCidades cidade[]);
#endif