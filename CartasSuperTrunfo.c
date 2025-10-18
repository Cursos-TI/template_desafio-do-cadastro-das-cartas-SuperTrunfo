#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variaveis da carta 1

    int carta1 = 1;
    char estado1;
    char codigoDaCarta1[50];
    char nomeDaCidade1[50];
    int populacao1;
    float areaEmKm1;
    float pib1;
    int numeroDePontosTuristicos1;

    // Variaveis da carta 2

    int carta2 = 2;
    char estado2;
    char codigoDaCarta2[50];
    char nomeDaCidade2[50];
    int populacao2;
    float areaEmKm2;
    float pib2;
    int numeroDePontosTuristicos2;

    // Interação do usuário para a carta 1

    printf("Insira as informações da primeira carta\n");
    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado1);

    printf("Insira o código da carta (ex: A01, B03):\n");
    scanf("%s", codigoDaCarta1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", nomeDaCidade1);

    printf("Insira a quantidade populacional da cidade:\n");
    scanf("%d", &populacao1);

    printf("Insira a área em km² da cidade:\n");
    scanf("%f", &areaEmKm1);

    printf("Insira o pib da cidade:\n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos1);
    printf("\n");

    // Interação do usuario para a carta 2
    printf("Insira as informações da segunda carta\n");
    printf("Insira uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%c", &estado2);

    printf("Insira o código da carta (ex: A01, B03):\n");
    scanf("%s", codigoDaCarta2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", nomeDaCidade2);

    printf("Insira a quantidade populacional da cidade:\n");
    scanf("%d", &populacao2);

    printf("Insira a área em km² da cidade:\n");
    scanf("%f", &areaEmKm2);

    printf("Insira o pib da cidade:\n");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos2);

    // Informações da carta 1
    printf("-\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoDaCarta1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", areaEmKm1);
    printf("Pib: R$ %.9f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos1);

    // Informações da carta 2
    printf("\n");
    printf("Carta: %d\n", carta2);
    printf("Estado %c\n", estado2);
    printf("Código da carta: %s\n", codigoDaCarta2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaEmKm2);
    printf("Pib: R$ %.9f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", numeroDePontosTuristicos2);


return 0;
} 
