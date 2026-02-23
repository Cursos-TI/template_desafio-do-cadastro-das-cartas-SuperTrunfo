#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{   
    // -------- SUPER TRUNFO INTRODUÇÃO Á PROGRAMAÇÃO DE COMPUTADORES | ADS - ESTACIO --------
    // Variáveis para a carta do jogador 1
    char state1[50], code_letters1[3], city_name1[50];
    int population1;
    float area1;
    float pib1;
    int number_touristic_points1;
    
    // Variáveis para a carta do jogador 2
    char state[50], code_letters[3], city_name[50];
    int population;
    float area;
    float pib;
    int number_touristic_points;


    // Entrada de dados para a carta do jogador 1
    printf("Informe o nome do Estado: ");
    scanf("%s", state);
    printf("Digite o código de letras: ");
    scanf("%s", code_letters);
    printf("Digite o nome da cidade: ");
    scanf("%s", city_name);
    printf("Digite a população: ");
    scanf("%d", &population);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &number_touristic_points);

    // Entrada de dados para a carta do jogador 2
    printf("\n--- CARTA 1 ---\n");
    printf("Informe o nome do Estado: ");
    scanf("%s", state1);
    printf("Digite o código de letras: ");
    scanf("%s", code_letters1);
    printf("Digite o nome da cidade: ");
    scanf("%s", city_name1);
    printf("Digite a população: ");
    scanf("%d", &population1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &number_touristic_points1);


    // Exibição dos dados das cartas dos jogadores
    printf("\n--- CARTA 2 ---\n");
    printf("\nEstado: %s\n", state);
    printf("Código de letras: %c%s\n", state[0], code_letters);
    printf("Nome da cidade: %s\n", city_name);
    printf("População: %d\n", population);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", number_touristic_points);

    // Exibição dos dados da carta do jogador 2
    printf("\n--- JOGADOR 2 ---\n");
    printf("\nEstado: %s\n", state1);
    printf("Código de letras: %c%s\n", state1[0], code_letters1);
    printf("Nome da cidade: %s\n", city_name1);
    printf("População: %d\n", population1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", number_touristic_points1);
    
    return 0;
}