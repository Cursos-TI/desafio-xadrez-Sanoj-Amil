#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal cima-direita)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o movimento do Cavalo (L: 2 cima, 1 direita)
void moverCavalo() {
    int cima, direita;
    
    // Loop externo para movimento vertical (2 casas para cima)
    for (cima = 0; cima < 2; cima++) {
        // Verifica se precisamos pular a segunda iteração (exemplo de uso de continue)
        if (cima == 1) {
            printf("Cima (segunda casa)\n");
            continue;
        }
        printf("Cima (primeira casa)\n");
        
        // Loop interno para movimento horizontal (1 casa para direita)
        for (direita = 0; direita < 1; direita++) {
            // Exemplo de uso de break - só executa uma vez
            printf("Direita\n");
            break;
        }
    }
}

// Versão alternativa do Bispo com loops aninhados
void moverBispoComLoops(int casas) {
    int vertical, horizontal;
    
    // Loop externo para controle vertical
    for (vertical = 0; vertical < casas; vertical++) {
        // Loop interno para controle horizontal
        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Constantes para número de movimentos
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;

    // Simulação do movimento da Torre (recursivo)
    printf("Movimento da Torre (%d casas para direita):\n", TORRE_CASAS);
    moverTorre(TORRE_CASAS);

    // Simulação do movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (%d casas na diagonal cima-direita):\n", BISPO_CASAS);
    moverBispo(BISPO_CASAS);

    // Simulação alternativa do Bispo com loops aninhados
    printf("\nMovimento do Bispo com loops aninhados (%d casas):\n", BISPO_CASAS);
    moverBispoComLoops(BISPO_CASAS);

    // Simulação do movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha (%d casas para esquerda):\n", RAINHA_CASAS);
    moverRainha(RAINHA_CASAS);

    // Simulação do movimento do Cavalo (loops complexos)
    printf("\nMovimento do Cavalo (L: 2 cima, 1 direita):\n");
    moverCavalo();

    return 0;
}