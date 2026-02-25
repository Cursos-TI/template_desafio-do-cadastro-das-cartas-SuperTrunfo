
// Aluno - Jeferson Santos
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main()
{
    char estado1[50], codigo1[50], nome1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    printf("Digite a letra do estado (A-H): ");
    scanf("%49s", estado1);

    printf("Digite o codigo do estado (ex:A01): ");
    scanf("%49s", codigo1);

    printf("Digite o nome do estado: ");
    scanf("%49s", nome1);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao1);

    printf("Digite a area do estado: ");
    scanf("%f", &area1);

    printf("Digite o pib do estado: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d mil habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    char estado2[50], codigo2[50], nome2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("\nDigite a letra do estado (B-H): ");
    scanf("%49s", estado2);

    printf("Digite o codigo do estado (ex:B01): ");
    scanf("%49s", codigo2);

    printf("Digite o nome do estado: ");
    scanf("%49s", nome2);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao2);

    printf("Digite a area do estado: ");
    scanf("%f", &area2);

    printf("Digite o pib do estado: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\nCARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d mil habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}
