#include <stdio.h>

// Função recursiva para mover a Torre 5 vezes para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva com loop aninhado para mover o Bispo 5 vezes em diagonal (Cima + Direita)
void moverBispo(int passos) {
    if (passos == 0) return;

    for (int i = 0; i < 2; i++) { // Loop aninhado
        if (i == 0)
            printf("Cima\n");
        else
            printf("Direita\n");
    }

    moverBispo(passos - 1);
}

// Função recursiva para mover a Rainha 8 vezes para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Movimento do Cavalo: L para cima e para a direita
void moverCavalo() {

    for (int i = 0, cima = 0; i < 3; i++) {
        if (cima < 2) {
            printf("Cima\n");
            cima++;
            continue;  // volta pro for sem executar o resto (i avança)
        }

        if (cima == 2) {
            printf("Direita\n");
            break; // movimento completo
        }
    }
}

int main() {
    printf("Movimentação da Torre:\n");
    moverTorre(5);

    printf("\nMovimentação do Bispo:\n");
    moverBispo(5);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}