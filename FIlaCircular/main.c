#include <stdio.h>
#include "FilaCircular.h"

//Constantes
enum {
    OP_NAO_SELECIONADA = 0,
    OP_PUSH,
    OP_POP,
    OP_SAIR
};

void menu();
int opcao = OP_NAO_SELECIONADA;
int numero;
bool vazia = true;
bool popou;
int main(void) {
    while (opcao != OP_SAIR) {
        if (inicio != fim) {
            vazia = false;
        }
        if (!vazia && inicio == fim && popou) {
            vazia = true;
        }

        if (fim == SIZE) {
            fim = 0;
        }
        if (inicio == SIZE) {
            inicio = 0;
        }
        menu();
        switch (opcao) {
            case OP_PUSH:
                popou = false;
                printf("Inserindo valor:\n");
                scanf("%d",&numero);
                if (push(numero)) {
                    printf("%d entrou na fila!", numero);
                    break;
                }
                printf("Fila cheia!");
                break;
            case OP_POP:
                popou = true;
                if (pop(&numero)) {
                    printf("%d saiu da fila", numero);
                    break;
                }
                printf("Fila vazia!");
                break;
            case OP_SAIR:
            default:
                return 0;

        }


    }
}

void menu() {
    printf("\n%d vazia\n", vazia);
    printf("\n%d - Inicio\n", inicio);
    printf("%d - Fim\n", fim);
    printf("\n\nFila Atual:\n");
    for (int i = 0; i < SIZE; i++) {
        if (i!= 0) {
            printf(" - %d ",fila[i]);
        }else printf("%d",fila[i]);
    }
    printf("\n");
    printf("---Menu---\n");
    printf("%d. Entrar Fila\n", OP_PUSH);
    printf("%d. Sair Fila\n", OP_POP);
    printf("%d. Sair Sistema\n", OP_SAIR);
    printf("Entre com sua opcao: ");
    scanf("%d",&opcao);

}