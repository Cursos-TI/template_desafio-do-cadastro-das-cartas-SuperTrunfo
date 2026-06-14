#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Váriaveis Carta 1//
    char Estado1[50];
    char Codigo1[10];
    char Cidade1[ 50];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos1;

    //Váriaveis carta 2//

    char Estado2[50];
    char Codigo2[10];
    char Cidade2[ 50];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos2;

  // Área para entrada de dados

      //-->Entrada e Saida Carta 1//

    printf("CADASTRO CARTA 1:\n");
    printf("Digite o estado (A-H):\n ");
    scanf(" %s", Estado1);
    printf("Digite o código da carta (ex:A01...A04):\n ");
    scanf(" %s", Codigo1);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a população:\n ");
    scanf("%d", &Populacao1);
    printf("Digite a área (km²):\n ");
    scanf("%f", &Area1);
    printf("Digite o Pib:\n ");
    scanf("%f", &Pib1);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &Pontos1);

  // Área para exibição dos dados da cidade

        // Dados das Cartas 1 //
    printf("\n DADOS CARTA 1:\n");
    printf("ESTADO: %s\n", Estado1);
    printf("CODIGO DA CARTA: %s\n", Codigo1);
    printf("NOME DA CIDADE: %s\n", Cidade1); 
    printf("POPULAÇÃO: %d\n", Populacao1);
    printf("ÁREA: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("PONTOS: %d\n", Pontos1);

    // Área para entrada de dados

      //-->Entrada e Saida Carta 2//

    printf("CADASTRO CARTA 2:\n");

    printf("Digite o estado (A-H):\n ");
    scanf(" %s", Estado2);
    printf("Digite o código da carta (ex:B01...B04):\n");
    scanf(" %s", Codigo2);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a população:\n ");
    scanf("%d", &Populacao2);
    printf("Digite a área (km²):\n ");
    scanf("%f", &Area2);
    printf("Digite o Pib:\n ");
    scanf("%f", &Pib2);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &Pontos2);

  // Área para exibição dos dados da cidade

    // Dados das Cartas 2 //
    printf("\n DADOS CARTA 2:\n");
    printf("ESTADO: %s\n", Estado2);
    printf("CÓDIGO DA CARTA: %s\n ", Codigo2);
    printf("NOME DA CIDADE: %s\n", Cidade2); 
    printf("POPULAÇÃO: %d\n", Populacao2);
    printf("ÁREA: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("PONTOS: %d\n", Pontos2);

return 0;
} 
