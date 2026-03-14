//
// Created by Twist on 3/7/2026.
//

#ifndef FILACIRCULAR_FILACIRCULAR_H
#define FILACIRCULAR_FILACIRCULAR_H
#include <stdbool.h>

//Constantes
enum {
    SIZE = 4
};

//Variaveis
extern int fila[SIZE];
extern int inicio;
extern int fim;
extern bool vazia;

//Prototipos
bool push(int valor);
bool pop(int * valor);
#endif //FILACIRCULAR_FILACIRCULAR_H