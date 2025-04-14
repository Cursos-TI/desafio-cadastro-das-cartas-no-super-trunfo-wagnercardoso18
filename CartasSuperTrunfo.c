#include <stdio.h>

int main() {
    // carta 1
    char estado1[50], cidade1[50];
    int codigo1, pontos1;
    unsigned long int populacao1;
    float area1, pib1;
    float densidade1, pib_per_capita1, super_poder1;

    // carta 2
    char estado2[50], cidade2[50];
    int codigo2, pontos2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidade2, pib_per_capita2, super_poder2;

    // entrada carta 1
    printf("=== carta 1 ===\n");
    printf("estado: ");
    scanf(" %[^\n]", estado1);
    printf("codigo da carta: ");
    scanf("%d", &codigo1);
    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("populacao: ");
    scanf("%lu", &populacao1);
    printf("area (km²): ");
    scanf("%f", &area1);
    printf("pib (em milhoes): ");
    scanf("%f", &pib1);
    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // entrada carta 2
    printf("\n=== carta 2 ===\n");
    printf("estado: ");
    scanf(" %[^\n]", estado2);
    printf("codigo da carta: ");
    scanf("%d", &codigo2);
    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("populacao: ");
    scanf("%lu", &populacao2);
    printf("area (km²): ");
    scanf("%f", &area2);
    printf("pib (em milhoes): ");
    scanf("%f", &pib2);
    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // calculos carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_per_capita1 + (1.0 / densidade1);

    // calculos carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // comparacoes
    int v_pop = populacao1 > populacao2;
    int v_area = area1 > area2;
    int v_pib = pib1 > pib2;
    int v_pontos = pontos1 > pontos2;
    int v_densidade = densidade1 < densidade2; 
    int v_pibpc = pib_per_capita1 > pib_per_capita2;
    int v_poder = super_poder1 > super_poder2;

    // exibicao comparacoes
    printf("\n--- comparacao de cartas ---\n");
    printf("populacao: carta 1 venceu (%d)\n", v_pop);
    printf("area: carta 1 venceu (%d)\n", v_area);
    printf("pib: carta 1 venceu (%d)\n", v_pib);
    printf("pontos turisticos: carta 1 venceu (%d)\n", v_pontos);
    printf("densidade populacional: carta 1 venceu (%d)\n", v_densidade);
    printf("pib per capita: carta 1 venceu (%d)\n", v_pibpc);
    printf("super poder: carta 1 venceu (%d)\n", v_poder);

    return 0;
}
