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

    // Movimento do Cavalo (2 casas para baixo e 1 para esquerda) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    
    // Primeira parte do L: 2 casas para baixo (usando FOR)
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 casa para esquerda (usando WHILE)
    int casa_cavalo = 1;
    while (casa_cavalo <= 1) {
        printf("Esquerda\n");
        casa_cavalo++;

    return 0;
}

}
