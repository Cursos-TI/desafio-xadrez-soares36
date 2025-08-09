#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo (também com loops aninhados)
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    // Versão com loops aninhados (adicional)
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    
    // Versão recursiva
    printf("\nMovimento do Bispo (recursivo):\n");
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento complexo do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo (complexo):\n");
    
    int movimentos_cima = 0;
    int movimentos_direita = 0;
    
    for (int i = 1; i <= 3; i++) {
        while (movimentos_cima < 2) {
            printf("Cima\n");
            movimentos_cima++;
            
            if (i > 2) break; // Condição adicional para controle
            continue;
        }
        
        if (movimentos_direita < 1 && movimentos_cima >= 2) {
            printf("Direita\n");
            movimentos_direita++;
        }
    }
}

int main() {
    // Movimento da Torre (recursivo) - 5 casas para a direita
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (recursivo e com loops aninhados) - 5 casas na diagonal
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (recursivo) - 8 casas para a esquerda
    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (loops complexos) - 2 casas para cima e 1 para direita
    moverCavalo();
    printf("\n");

    return 0;
}