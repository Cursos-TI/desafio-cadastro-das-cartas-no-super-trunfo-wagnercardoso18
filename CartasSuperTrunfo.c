#include <stdio.h>

int main() {
    // dados da carta 1
    char estado1[50];
    int codigo1;
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // dados da carta 2
    char estado2[50];
    int codigo2;
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // leitura carta 1
    printf("=== carta 1 ===\n");
    printf("estado: ");
    scanf(" %[^\n]", estado1);
    printf("codigo da carta: ");
    scanf("%d", &codigo1);
    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("populacao: ");
    scanf("%d", &populacao1);
    printf("area (km²): ");
    scanf("%f", &area1);
    printf("pib (em milhoes): ");
    scanf("%f", &pib1);
    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // calculos carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000) / populacao1;

    // leitura carta 2
    printf("\n=== carta 2 ===\n");
    printf("estado: ");
    scanf(" %[^\n]", estado2);
    printf("codigo da carta: ");
    scanf("%d", &codigo2);
    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("populacao: ");
    scanf("%d", &populacao2);
    printf("area (km²): ");
    scanf("%f", &area2);
    printf("pib (em milhoes): ");
    scanf("%f", &pib2);
    printf("numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculos carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000) / populacao2;

    // exibicao carta 1
    printf("\n--- resultado carta 1 ---\n");
    printf("estado: %s\n", estado1);
    printf("codigo da carta: %d\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: r$ %.2f milhoes\n", pib1);
    printf("pontos turisticos: %d\n", pontos_turisticos1);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("pib per capita: r$ %.2f\n", pib_per_capita1);

    // exibicao carta 2
    printf("\n--- resultado carta 2 ---\n");
    printf("estado: %s\n", estado2);
    printf("codigo da carta: %d\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: r$ %.2f milhoes\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("pib per capita: r$ %.2f\n", pib_per_capita2);

    return 0;
}

