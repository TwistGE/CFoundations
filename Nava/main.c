#include <stdio.h>
#include "Pilha.h"

/*/ Constantes
enum {
    OP_NAO_SELECIONADA = 0,
    OP_PUSH,
    OP_POP,
    OP_SAIR
};
*/

// Protótipos
#define size 50
char sentenca[size];

char sentenca[] = "(2*25+)55(/2/3";

int main(void) {
    printf("Sua sentenca:\n");
    for (int i = 0; i < size; i++) {
        printf("%c posicao da pilha %d\n", sentenca[i], posicao);
        if (sentenca[i] == '\0') {
            if (posicao == 0) {
                printf("\nSentenca Balanceada!");
                break;
            }else {
                printf("Desbalanceada!");
                break;
            }
        }
        if (sentenca[i] == '(' || sentenca[i] == '{') {
            push(sentenca[i]);
        }
            if (sentenca[i] == ')' || sentenca[i] == '}') {
                if (posicao == 0) {
                    printf("\nSentenca Desbalanceada!");
                    break;
                }
                if (sentenca[i] ==')' && pilha[posicao-1] == '(') {
                    pop(&sentenca[i]);
                }
                else if (sentenca[i] =='}' && pilha[posicao-1] == '{') {
                    pop(&sentenca[i]);
                }
            }
        }
    }
