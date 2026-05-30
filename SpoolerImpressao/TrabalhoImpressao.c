//
// Created by Twist on 28/03/2026.

#include "TrabalhoImpressao.h"

TrabalhoImpressao fila[SIZE];
int inicio;
int fim;
int id=1;
bool vazia;

bool push(TrabalhoImpressao impressao) {
    if (!vazia && inicio == fim) {
        return false;
    }
    fila[fim] = impressao;
    fim++;
    if (fim == SIZE) fim = 0;
    vazia = false;

    return true;
}

bool pop(TrabalhoImpressao *impressao) {
    if (vazia) {
        return false;
    }
    *impressao = fila[inicio];
    inicio++;
    if (inicio == SIZE) inicio = 0;
    if (inicio == fim) vazia = true;
    return true;
}

void inicializa_fila() {
    inicio = 0;
    fim = 0;
    vazia = true;
}

bool esta_vazia() {
    return vazia;
}

bool esta_cheia() {
    if (!vazia && inicio == fim) {
        return true;
    }
    return false;
}

void adiciona_trabalho(TrabalhoImpressao trabalho){
    if (!esta_cheia()) push(trabalho);
}

void processa_proximo_trabalho(TrabalhoImpressao *trabalho) {
    if (!vazia) {
        pop(trabalho);
    }
}


//