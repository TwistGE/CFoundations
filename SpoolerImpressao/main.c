#include <stdio.h>
#include "TrabalhoImpressao.h"

enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADD,
    OP_PROCESS,
    OP_VIEW,
    OP_SAIR

};
void menu();
void viewList();
int opcao = OP_NAO_SELECIONADA;
bool popou;
int main(void) {
    inicializa_fila();
    while (opcao != OP_SAIR) {
        menu();
        switch (opcao) {
            case OP_ADD: {
                TrabalhoImpressao novoTrabalho;
                printf("\nInserindo trabalho novo\n");
                novoTrabalho.id = id;
                printf("Insira o nome do arquivo\n");
                scanf("%s",novoTrabalho.nome_arquivo);
                printf("Insira qtd paginas do arquivo\n");
                scanf("%d",&novoTrabalho.num_paginas);
                adiciona_trabalho(novoTrabalho);
                id++;
                break;
            }
            case OP_PROCESS: {
                if (esta_vazia()) {
                    printf("Fila vazia!\n");
                    break;
                }
                TrabalhoImpressao trabalhoRetirado;
                processa_proximo_trabalho(&trabalhoRetirado);
                printf("\ntrabalho n %d retirado\n", trabalhoRetirado.id);
                break;
            }

            case OP_VIEW:
                viewList();
                break;
            case OP_SAIR:
            default:
                return 0;


        }
    }
}

void menu() {
    printf("\n");
    printf("---Menu---\n");
    printf("%d. Adicionar Trabalho\n", OP_ADD);
    printf("%d. Processar Trabalho\n", OP_PROCESS);
    printf("%d. Ver lista\n", OP_VIEW);
    printf("%d. Sair Spooler\n", OP_SAIR);
    printf("Entre com sua opcao: ");
    scanf("%d",&opcao);
}


void viewList() {
    int i = inicio;
    if (vazia) {
        printf("Fila vazia!");
    }else {
        do {
            printf("id: %d - Nome: %s - Pg: %d\n ", fila[i].id, fila[i].nome_arquivo, fila[i].num_paginas);
            i++;
            if (i == SIZE){
                i = 0;
            }
        }while (i!=fim);
    }
}