#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Movimento horizontal para a direita
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("Movimento do Bispo:\n");
    int casaBispo = 1;
    while (casaBispo <= 5) {
        printf("Cima, Direita\n"); // Movimento diagonal (cima + direita)
        casaBispo++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha:\n");
    int casaRainha = 1;
    do {
        printf("Esquerda\n"); // Movimento horizontal para a esquerda
        casaRainha++;
    } while (casaRainha <= 8);

    return 0;
}