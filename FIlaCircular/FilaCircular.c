//
// Created by Twist on 3/7/2026.
//

#include "FilaCircular.h"

//Variaveis
int fila[SIZE];
int inicio = 0;
int fim = 0;

//Funções
bool push(int valor) {
    if (!vazia && inicio == fim) {
        return false;
    }
    fila[fim] = valor;
    fim++;
    return true;
}

bool pop(int *valor) {
    if (vazia) {
        return false;
    }
    *valor = fila[inicio];
    inicio++;
    return true;
}
