#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   // Variáveis da Carta 1

    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Variáveis da Carta 2

    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

  // Área para entrada de dados

  //Dados da Carta 1

    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (De A a H): \n");
    scanf(" %c", &Estado1);  //Digitar um único caractere
    
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", Codigo1); //String não precisa do "&"

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Dados da Carta 2

    printf("Cadastro da Carta 2:\n");

    printf("Digite o estado (De A a H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (ex: B02): \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

  // Área para exibição dos dados da cidade

// Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}