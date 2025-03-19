#ifndef CIDADES_H
#define CIDADES_H

#include "arvore.h"
#include "eventos.h"

void Central(TCelula *x);
void preOrdem(TCelula *x);
void posOrdem(TCelula *x);
void Inserir(TCelula **x, TCelula *pai, TItem Item);
void ArmazenaCidades(char *Array_cidade);
void preencherCidades(TCidades cidade[]);

#endif
