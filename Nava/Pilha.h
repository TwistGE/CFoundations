//
// Created by nava on 21/02/2026.
//

#ifndef PILHA_PILHA_H
#define PILHA_PILHA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 20
};

// Variáveis
extern char pilha[TAMANHO];
extern int posicao;

// Protótipos
bool push(char valor);
bool pop(char *valor);

#endif //PILHA_PILHA_H