#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int  main() {  
    char estado[30];
    char cidade[30];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
  
    int quantidade = 3;
    for (int i = 0; i < quantidade; i++) {
    // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf("%29s", estado);
    printf("Digite a cidade: \n");
    scanf("%29s", cidade);
    printf("Digite o código: \n");
    scanf("%9s", codigo);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos);
    // Área para exibição dos dados da cidade
    printf("DADOS DA CARTA\n");
    printf("O estado é: %s\n", estado);
    printf("A cidade é: %s\n", cidade);
    printf("O código é: %s\n", codigo);
    printf("A população é: %d\n", populacao);
    printf("A área é: %.2f\n", area);
    printf("O PIB é: %.2f\n", pib);
        printf("O número de pontos turísticos é: %d\n", numerodepontosturisticos);
        printf("-----------------------------\n");
    }
    return 0;
}
