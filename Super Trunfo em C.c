#include <stdio.h>

int main() {

// ----- V. Carta 1 -----


char estado1[3];
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
double pib1;
int pontosTuristicos1;

// ----- V. Carta 2 -----

char estado2[3];
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
double pib2;
int pontosTuristicos2;

// ----- Dados Carta 1 -----

printf("--- Cadastro Carta 1 ---\n");

printf("Estado (A a H):  ");
scanf("%3s", estado1);

printf("Codigo da Carta (Ex: A01):  ");
scanf("%s", codigo1);

printf("Nome da Cidade:  ");
scanf(" %49[^\n]", cidade1);

printf("população:  ");
scanf("%d", &populacao1);

printf("Area (km2):  ");
scanf("%f", &area1);

printf("PIB (em bilhões):  ");
scanf("%lf", &pib1);

printf("Numero de Pontos Turisticos:  ");
scanf("%d", &pontosTuristicos1);

// ----- Dados Carta 2 -----

printf("--- Cadastro Carta 2 ---\n");

printf("Estado (A a H):  ");
scanf("%3s", estado2);

printf("Codigo da Carta (Ex: A01):  ");
scanf("%s", codigo2);

printf("Nome da Cidade:  ");
scanf(" %49[^\n]", cidade2);

printf("população:  ");
scanf("%d", &populacao2);

printf("Area (km2):  ");
scanf("%f", &area2);

printf("PIB (em bilhões):  ");
scanf("%lf", &pib2);

printf("Numero de Pontos Turisticos:  ");
scanf("%d", &pontosTuristicos2);

// ----- Exibição dos Dados -----

   printf("\n\n===== CARTAS CADASTRADAS =====\n");

        printf("\nCarta 1:\n");
         printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
         printf("Nome da Cidade: %s\n", cidade1);
         printf("Populacao: %d\n", populacao1);
         printf("Area: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

        printf("\nCarta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

}