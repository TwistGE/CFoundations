//
// Created by Twist on 3/7/2026.
//

#include "Fila.h"

//Variaveis
int fila[SIZE];
int inicio=0;
int fim=0;

//Funções
bool push(int valor) {
    if (fim == SIZE) {
        return false;
    }
    fila[fim] = valor;
    fim++;
    return true;
}

bool pop(int *valor) {
    if (inicio == fim) {
        return false;
    }
    *valor = fila[inicio];
    inicio++;
    return true;
}