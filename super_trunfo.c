#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char nome1[50], estado1[30];
    int codigo1, pontos1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis para Carta 2
    char nome2[50], estado2[30];
    int codigo2, pontos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    // Entrada dos dados da Carta 1
    printf("Digite o nome da Carta 1: ");
    scanf(" %[^\n]", nome1);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código: ");
    scanf("%d", &codigo1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o nome da Carta 2: ");
    scanf(" %[^\n]", nome2);
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código: ");
    scanf("%d", &codigo2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Resultados das Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // Menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
