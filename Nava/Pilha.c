//
// Created by nava on 21/02/2026.
//
#include "Pilha.h"

// Variáveis
char pilha[TAMANHO];
int posicao = 0;

// Funções
bool push(char valor) {
    if (posicao == TAMANHO) {
        return false;
    }
    pilha[posicao] = valor;
    posicao++;
    return true;
}

bool pop(char *valor) {
    if (posicao == 0) {
        return false;
    }
    posicao--;
    *valor = pilha[posicao];
    return true;
}
