#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Move uma casa para a direita
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal superior direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n"); // Move uma casa na diagonal
        casa_bispo++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int casa_rainha = 1;
    do {
        printf("Esquerda\n"); // Move uma casa para a esquerda
        casa_rainha++;
    } while (casa_rainha <= 8);

    return 0;
}