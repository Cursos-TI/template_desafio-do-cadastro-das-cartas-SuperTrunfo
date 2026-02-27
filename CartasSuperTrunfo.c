#include <stdio.h>

// Programa de cadastro de cartas do Super Trunfo
// O usuario digita os dados das cartas e o programa exibe as informacoes cadastradas

int main(){

    // CARTA 1
    char estado1;        // letra que representa o estado
    char codigo1[10];    // codigo da carta (ex: A01)
    char cidade1[50];    // nome da cidade
    int populacao1;      // numero de habitantes
    float area1;         // area da cidade
    float pib1;          // PIB da cidade
    int pontos1;         // quantidade de pontos turisticos

    // CARTA 2
    char estado2;        // letra que representa o estado
    char codigo2[10];    // codigo da carta (ex: B01)
    char cidade2[50];    // nome da cidade
    int populacao2;      // numero de habitantes
    float area2;         // area da cidade
    float pib2;          // PIB da cidade
    int pontos2;         // quantidade de pontos turisticos

    // ============================
    // NIVEL NOVATO
    // Cadastro e exibicao das cartas
    // ============================

    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado1);   // scanf le o valor digitado e guarda na variavel

    printf("Codigo: ");
    scanf("%s", codigo1);     // le texto (sem espaco) e guarda no codigo

    printf("Cidade: ");
    scanf("%s", cidade1);     // le texto (sem espaco) e guarda na cidade

    printf("Populacao: ");
    scanf("%d", &populacao1); // & indica o endereco da variavel para ser alterada

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (letra): ");
    scanf(" %c", &estado2);   // o espaco antes do %c evita pegar ENTER

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    printf("\n=== CARTAS CADASTRADAS (NOVATO) ===\n");

    // printf serve para mostrar mensagens e valores na tela
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);


    // ============================
    // NIVEL AVENTUREIRO
    // Calculos:
    // - Densidade Populacional = Populacao / Area
    // - PIB per Capita = PIB / Populacao
    // ============================

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Protecao pra nao dar divisao por zero (evita bug)
    if(area1 != 0)
        densidade1 = (float)populacao1 / area1;
    else
        densidade1 = 0;

    if(populacao1 != 0)
        pibPerCapita1 = pib1 / populacao1;
    else
        pibPerCapita1 = 0;

    if(area2 != 0)
        densidade2 = (float)populacao2 / area2;
    else
        densidade2 = 0;

    if(populacao2 != 0)
        pibPerCapita2 = pib2 / populacao2;
    else
        pibPerCapita2 = 0;

    printf("\n=== DADOS CALCULADOS (AVENTUREIRO) ===\n");

    printf("\nCarta 1\n");
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);


    // ============================
    // NIVEL MESTRE
    // Comparacoes:
    // - Densidade: menor vence
    // - Outras propriedades: maior vence
    // - Super Poder: soma de todas as propriedades
    // ============================

    float super1, super2;

    // Super Poder = soma das propriedades (inseridas + calculadas)
    super1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibPerCapita1;
    super2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibPerCapita2;

    printf("\n=== RESULTADOS DAS COMPARACOES (MESTRE) ===\n");

    printf("\n[Populacao] ");
    if(populacao1 > populacao2) printf("Vencedor: Carta 1\n");
    else if(populacao2 > populacao1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[Area] ");
    if(area1 > area2) printf("Vencedor: Carta 1\n");
    else if(area2 > area1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[PIB] ");
    if(pib1 > pib2) printf("Vencedor: Carta 1\n");
    else if(pib2 > pib1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[Pontos Turisticos] ");
    if(pontos1 > pontos2) printf("Vencedor: Carta 1\n");
    else if(pontos2 > pontos1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[Densidade Populacional] (menor vence) ");
    if(densidade1 < densidade2) printf("Vencedor: Carta 1\n");
    else if(densidade2 < densidade1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[PIB per Capita] ");
    if(pibPerCapita1 > pibPerCapita2) printf("Vencedor: Carta 1\n");
    else if(pibPerCapita2 > pibPerCapita1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    printf("[Super Poder] ");
    printf("Carta 1 = %.2f | Carta 2 = %.2f -> ", super1, super2);
    if(super1 > super2) printf("Vencedor: Carta 1\n");
    else if(super2 > super1) printf("Vencedor: Carta 2\n");
    else printf("Empate\n");

    return 0;
}