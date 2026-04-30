#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    printf("--------------------\n");
    printf("### Nivel novato ###\n");
    printf("-----***********---\n");

  // Área para exibição dos dados da cidadee

    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area_km;
    float pib;
    int numero_de_pontos_turisticos;
    
    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite seu codigo: ");
    scanf("%s",codigo);

    printf("Digite sua cidade: ");
    scanf("%s", cidade);

    printf("Quantas pessoas: ");
    scanf("%d", &populacao);

    printf("Tamnho da aria km: ");
    scanf("%f", &area_km);

    printf("PIB: ", pib);
    scanf("%f", &pib);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("----carta2----\n");

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area_km2;
    float pib2;
    int numero_de_pontos_turisticos2;

    printf("Digite seu estado: ");
    scanf("%c", &estado2);

    printf("Digite seu codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Quantas pessoas: ");
    scanf("%d", &populacao2);

    printf("Tamanho da area km: ");
    scanf("%f", &area_km2);

    printf("Digite o Pib2: ");
    scanf("%f",&pib2);

    printf("Quantos ponto turisticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);


  
return 0;

  
} 
