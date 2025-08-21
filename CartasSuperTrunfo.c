#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Variáveis para a Carta 1
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    // Novos atributos calculados
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis para a Carta 2
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    // Novos atributos calculados
    float densidade2, pibPerCapita2, superPoder2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de USD): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // --- Cálculo dos atributos da Carta 1 ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1 / densidade1) + pibPerCapita1;

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de USD): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // --- Cálculo dos atributos da Carta 2 ---
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidade2) + pibPerCapita2;

    // --- Exibicao dos Dados das Cartas ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de USD\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f bilhoes de USD por habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de USD\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f bilhoes de USD por habitante\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // --- COMPARACAO DAS CARTAS (nivel mestre) ---
    printf("--- RESULTADO DA DISPUTA ---\n");

    // Comparacao de Populacao
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 vence\n");
    } else if (populacao2 > populacao1) {
        printf("Populacao: Carta 2 vence\n");
    } else {
        printf("Populacao: Empate\n");
    }

    // Comparacao de Area
    if (area1 > area2) {
        printf("Area: Carta 1 vence\n");
    } else if (area2 > area1) {
        printf("Area: Carta 2 vence\n");
    } else {
        printf("Area: Empate\n");
    }

    // Comparacao de PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 vence\n");
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 vence\n");
    } else {
        printf("PIB: Empate\n");
    }

    // Comparacao de Pontos Turisticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 vence\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Pontos Turisticos: Carta 2 vence\n");
    } else {
        printf("Pontos Turisticos: Empate\n");
    }

    // Comparacao de Densidade Populacional (menor eh melhor)
    if (densidade1 < densidade2) {
        printf("Densidade: Carta 1 vence\n");
    } else if (densidade2 < densidade1) {
        printf("Densidade: Carta 2 vence\n");
    } else {
        printf("Densidade: Empate\n");
    }

    // Comparacao de PIB per Capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 vence\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("PIB per Capita: Carta 2 vence\n");
    } else {
        printf("PIB per Capita: Empate\n");
    }

    // Comparacao de Super Poder
    if (superPoder1 > superPoder2) {
        printf("SUPER PODER: CARTA 1 VENCE A DISPUTA!\n");
    } else if (superPoder2 > superPoder1) {
        printf("SUPER PODER: CARTA 2 VENCE A DISPUTA!\n");
    } else {
        printf("SUPER PODER: EMPATE INCRIVEL!\n");
    }

    return 0;
}