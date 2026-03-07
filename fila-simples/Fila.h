//
// Created by Twist on 3/7/2026.
//

#ifndef FILA_SIMPLES_FILA_H
#define FILA_SIMPLES_FILA_H
#include <stdbool.h>


//Constantes
enum {
    SIZE = 4
};



//Variaveis
extern int fila [SIZE];
extern int inicio;
extern int fim;

// Protótipos
bool push(int valor);
bool pop(int *valor);

#endif //FILA_SIMPLES_FILA_H