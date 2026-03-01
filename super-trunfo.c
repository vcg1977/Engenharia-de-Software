#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;                 // Ex: 'C'
    char codigo[4];              // Ex: "A01"
    char cidade[30];             // Ex: "Fortaleza"
    int populacao;               // Ex: 2000000
    float area;                  // Ex: 10000.0
    float pib;                   // Ex: 30000000.0
    int pontosTuristicos;        // Ex: 50
} Carta;

void mostrarCarta(Carta c) {
    printf("\n==============================\n");
    printf("Estado: %c\n", c.estado);
    printf("Codigo: %s\n", c.codigo);
    printf("Cidade: %s\n", c.cidade);
    printf("Populacao: %d\n", c.populacao);
    printf("Area (km²): %.2f\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos turisticos: %d\n", c.pontosTuristicos);
    printf("==============================\n");
}

int main() {
    Carta cartas[4] = {
        {'C', "A01", "Fortaleza", 2000000, 10000.0, 30000000.0, 50},
        {'S', "A02", "Sao Paulo", 12300000, 1521.0, 780000000.0, 80},
        {'R', "A03", "Rio de Janeiro", 6700000, 1200.0, 360000000.0, 60},
        {'M', "A04", "Manaus", 2200000, 11401.0, 120000000.0, 40}
    };

    int escolha1, escolha2, atributo;

    printf("=== SUPER TRUNFO - ESTADOS DO BRASIL ===\n");

    printf("\nEscolha a primeira carta (0 a 3): ");
    scanf("%d", &escolha1);

    printf("Escolha a segunda carta (0 a 3): ");
    scanf("%d", &escolha2);

    printf("\nAtributos para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("Escolha o atributo: ");
    scanf("%d", &atributo);

    mostrarCarta(cartas[escolha1]);
    mostrarCarta(cartas[escolha2]);

    printf("\n=== RESULTADO ===\n");

    switch (atributo) {
        case 1:
            if (cartas[escolha1].populacao > cartas[escolha2].populacao)
                printf("Carta %s venceu por Populacao!\n", cartas[escolha1].codigo);
            else if (cartas[escolha1].populacao < cartas[escolha2].populacao)
                printf("Carta %s venceu por Populacao!\n", cartas[escolha2].codigo);
            else
                printf("Empate!\n");
            break;

        case 2:
            if (cartas[escolha1].area > cartas[escolha2].area)
                printf("Carta %s venceu por Area!\n", cartas[escolha1].codigo);
            else if (cartas[escolha1].area < cartas[escolha2].area)
                printf("Carta %s venceu por Area!\n", cartas[escolha2].codigo);
            else
                printf("Empate!\n");
            break;

        case 3:
            if (cartas[escolha1].pib > cartas[escolha2].pib)
                printf("Carta %s venceu por PIB!\n", cartas[escolha1].codigo);
            else if (cartas[escolha1].pib < cartas[escolha2].pib)
                printf("Carta %s venceu por PIB!\n", cartas[escolha2].codigo);
            else
                printf("Empate!\n");
            break;

        case 4:
            if (cartas[escolha1].pontosTuristicos > cartas[escolha2].pontosTuristicos)
                printf("Carta %s venceu por Pontos Turisticos!\n", cartas[escolha1].codigo);
            else if (cartas[escolha1].pontosTuristicos < cartas[escolha2].pontosTuristicos)
                printf("Carta %s venceu por Pontos Turisticos!\n", cartas[escolha2].codigo);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo invalido!\n");
    }

    return 0;
}
