#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <stdbool.h>

#include "../include/arvore.h"
#include "../include/cidades.h"
#include "../include/eventos.h"
//geração de percursos

//caminhamento central ou in-order
//imprime os elementos do esquerda para a direita
void Central(TCelula *x){
    if(x != NULL){
        Central(x->esq);
        printf("%s", x->item.cidade.nome);
        Central(x->dir);
    }
}

//caminhamento pré-ordem
//imprime os elementos de cima para baixo(começando pela raiz)
void preOrdem(TCelula *x){
    if (x != NULL){
        printf("%s", x->item.cidade.nome);
        preOrdem(x->esq);
        preOrdem(x->dir);
    }
}

//caminhamento pós ordem
//imprime de baixo para cima(começando pelas células após a raiz, até chegar nela)
void posOrdem(TCelula *x){
    if (x != NULL){
        posOrdem(x->esq);
        posOrdem(x->dir);
        printf("%s", x->item.cidade.nome);
    }
}

//note que em todas essas funções há a condição de x ser diferente de null(nulo)
//isso é necessário pois, se x é nulo, ele não existe, ou seja, não há elementos na árvore para serem impressos
//isso evita erros na hora da execução

//função para criar uma nova cidade
TCelula *criaCidade(TItem Item){
    TCelula *novo = (TCelula *)malloc(sizeof(TCelula));//aloca memória para a cidade
    if(novo == NULL){
        printf("Erro de alocaçao!!!!\n");
    }

    novo -> item = Item;
    novo -> esq = NULL;
    novo -> dir = NULL;
    novo -> pai = NULL;
    return novo;
}

//função para inserir cidades
//**x é a raiz, Tcelula pai é o pai da raiaz, e Titem Item é o novo elemento a ser inserido
void Inserir(TCelula **x, TCelula *pai, TItem Item){
    if((*x) == NULL){//se a raiz não existe, cria ela
        (*x) = criaCidade(Item);
        if(pai != NULL){//se o pai existe, atribui o valor dele ao pai de x
            (*x) ->pai = pai;
            return;
        }
    }
    if(strcmp((*x)->item.cidade.nome, Item.cidade.nome) > 0){
        Inserir(&(*x)->esq, (*x), Item);
        return;
    }
    if(strcmp((*x)->item.cidade.nome, Item.cidade.nome) <= 0){
        Inserir(&(*x)->dir, (*x), Item);
    }
}