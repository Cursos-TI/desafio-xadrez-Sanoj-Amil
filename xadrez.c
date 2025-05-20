#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e direita) usando while
    printf("\nMovimento do Bispo:\n");
    int casa_bispo = 0;
    while (casa_bispo < 5) {
        printf("Cima, Direita\n");
        casa_bispo++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int casa_rainha = 0;
    do {
        printf("Esquerda\n");
        casa_rainha++;
    } while (casa_rainha < 8);

    return 0;
}