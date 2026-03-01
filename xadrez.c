#include <stdio.h>

int main() {

    // Movimento da Torre - usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // Movimento do Bispo - usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    printf("\n");

    // Movimento da Rainha - usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}
