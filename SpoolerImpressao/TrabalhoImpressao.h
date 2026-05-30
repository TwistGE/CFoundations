#ifndef SPOOLERIMPRESSAO_TRABALHOIMPRESSAO_H
#define SPOOLERIMPRESSAO_TRABALHOIMPRESSAO_H

#include <stdbool.h>

typedef struct {
    int id;
    char nome_arquivo[50];
    int num_paginas;
} TrabalhoImpressao;

enum {
    SIZE = 10
};

extern TrabalhoImpressao fila[SIZE];
extern int inicio;
extern int fim;
extern int id;
extern bool vazia;

bool push(TrabalhoImpressao impressao);
bool pop(TrabalhoImpressao *impressao);
void inicializa_fila(void);
bool esta_vazia(void);
bool esta_cheia(void);
void adiciona_trabalho(TrabalhoImpressao trabalho);
void processa_proximo_trabalho(TrabalhoImpressao *trabalho);

#endif