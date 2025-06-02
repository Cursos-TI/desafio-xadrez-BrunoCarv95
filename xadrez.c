#include <stdio.h>

// Constantes para quantidade de movimentos
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

int main() {
    int i;

    // Movimentação da TORRE: 5 casas para a direita (FOR)
    printf("Movimentação da Torre:\n");
    for (i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimentação do BISPO: 5 casas na diagonal superior direita (WHILE)
    printf("\nMovimentação do Bispo:\n");
    i = 0;
    while (i < MOV_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimentação da RAINHA: 8 casas para a esquerda (DO-WHILE)
    printf("\nMovimentação da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    return 0;
}