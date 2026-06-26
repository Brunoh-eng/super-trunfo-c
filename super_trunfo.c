#include <stdio.h>

int main() {

    // VARIÁVEIS (SÓ UMA VEZ)
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // =========================
    // CARTA 1
    // =========================

    printf("=== CARTA 1 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n--- DADOS CARTA 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    // =========================
    // CARTA 2 (REUTILIZA AS MESMAS VARIÁVEIS)
    // =========================

    printf("\n=== CARTA 2 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n--- DADOS CARTA 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
}