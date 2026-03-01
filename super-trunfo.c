#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;                 // Ex: 'C'
    c#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;   // alterado conforme pedido
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {
    Carta c1, c2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== CARTA 1 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &c1.estado);

    printf("Codigo da carta: ");
    scanf("%s", c1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", c1.cidade);

    printf("Populacao: ");
    scanf("%lu", &c1.populacao);

    printf("Area (km²): ");
    scanf("%f", &c1.area);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &c2.estado);

    printf("Codigo da carta: ");
    scanf("%s", c2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", c2.cidade);

    printf("Populacao: ");
    scanf("%lu", &c2.populacao);

    printf("Area (km²): ");
    scanf("%f", &c2.area);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    // ===== CALCULOS =====
    c1.densidade = (float)c1.populacao / c1.area;
    c2.densidade = (float)c2.populacao / c2.area;

    c1.pibPerCapita = c1.pib / (float)c1.populacao;
    c2.pibPerCapita = c2.pib / (float)c2.populacao;

    c1.superPoder =
        (float)c1.populacao +
        c1.area +
        c1.pib +
        (float)c1.pontosTuristicos +
        c1.pibPerCapita +
        (1.0f / c1.densidade);

    c2.superPoder =
        (float)c2.populacao +
        c2.area +
        c2.pib +
        (float)c2.pontosTuristicos +
        c2.pibPerCapita +
        (1.0f / c2.densidade);

    // ===== COMPARACOES =====
    int pop = (c1.populacao > c2.populacao);
    int area = (c1.area > c2.area);
    int pib = (c1.pib > c2.pib);
    int pontos = (c1.pontosTuristicos > c2.pontosTuristicos);
    int densidade = (c1.densidade < c2.densidade);  // menor vence
    int pibpc = (c1.pibPerCapita > c2.pibPerCapita);
    int superpoder = (c1.superPoder > c2.superPoder);

    // ===== SAIDA =====
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta %s venceu (%d)\n", pop ? "1" : "2", pop);
    printf("Area: Carta %s venceu (%d)\n", area ? "1" : "2", area);
    printf("PIB: Carta %s venceu (%d)\n", pib ? "1" : "2", pib);
    printf("Pontos Turisticos: Carta %s venceu (%d)\n", pontos ? "1" : "2", pontos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", densidade ? "1" : "2", densidade);
    printf("PIB per Capita: Carta %s venceu (%d)\n", pibpc ? "1" : "2", pibpc);
    printf("Super Poder: Carta %s venceu (%d)\n", superpoder ? "1" : "2", superpoder);

    return 0;
}har codigo[4];              // Ex: "A01"
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
