#include <stdio.h>
#include <stdlib.h>
int main() {
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
    system("cls");
    printf("Bem vindo ao supertrunfo de estados brasileiros\n");
    system("pause");
    system("cls");

    printf("carta_1: \n");
   
    char estado[25];
    printf("digite o seu estado:\n");
    scanf(" %[^\n]", estado);           // ← lê com espaço

    char nome_cidade[25];
    printf("digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade);      // ← lê com espaço

    char codigo[10];
    printf("digite seu codigo:\n");
    scanf(" %s", codigo);

    int populacao;
    printf("quantos habitantes:\n");
    scanf("%d", &populacao);

    float area;
    printf("area do estado(KM):\n");
    scanf("%f", &area);

    float PIB;
    printf("PIB do estado:\n");
    scanf("%f", &PIB);

    int pontos_turisticos;
    printf("quantos pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("\ncarta_2: \n");

    // limpa o buffer antes da carta_2
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    char estado2[25];
    printf("digite o seu estado:\n");
    scanf(" %[^\n]", estado2);          // ← lê com espaço

    char nome_cidade2[25];
    printf("digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade2);     // ← lê com espaço

    char codigo2[10];
    printf("digite seu codigo:\n");
    scanf(" %s", codigo2);

    int populacao2;
    printf("quantos habitantes:\n");
    scanf("%d", &populacao2);

    float area2;
    printf("area do estado(KM):\n");
    scanf("%f", &area2);

    float PIB2;
    printf("PIB do estado:\n");
    scanf("%f", &PIB2);

    int pontos_turisticos2;
    printf("quantos pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    system("pause");
    system("cls");
    printf("carta_1\nestado: %s\ncidade: %s\ncodigo: %s\npopulacao: %d\narea: %.2f km2\nR$ PIB: %.2f\npontos turisticos: %d\n", estado, nome_cidade, codigo, populacao, area, PIB, pontos_turisticos);
    system("pause");
    system("cls");
    printf("carta_2\nestado: %s\ncidade: %s\ncodigo: %s\npopulacao: %d\narea: %.2f km2\nR$ PIB: %.2f\npontos turisticos: %d\n", estado2, nome_cidade2, codigo2, populacao2, area2, PIB2, pontos_turisticos2);

return 0;
} 
