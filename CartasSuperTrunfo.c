#include <stdio.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    int numeroCidade1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    int numeroCidade2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


     // Área para entrada de dados

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do estado (a a H): ");
    scanf(" %c", &estado1);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &numeroCidade1);

    printf("Digite o codigo da carta, exemplo A01: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em milhões de Reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);



    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &numeroCidade2);

    printf("Digite o codigo da carta, exemplo B02: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em milhões de Reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade


    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Numero da Cidade: %d\n", numeroCidade1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB em milhões de Reais: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Numero da Cidade: %d\n", numeroCidade2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB em milhões de Reais: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}