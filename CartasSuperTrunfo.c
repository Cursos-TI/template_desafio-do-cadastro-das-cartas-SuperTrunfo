#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    char codigo_da_carta[6], nome_da_cidade[20], estado[20];
    int populacao, numero_pontos_turisticos;
    float area_em_km2, pib;

  // Área para entrada de dados
  
    printf("Digite o Estado: \n");
    scanf("%s" , estado);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s" , nome_da_cidade);
    
    printf("Digite o código da carta: \n");
    scanf("%s" , codigo_da_carta);
    
    printf("Digite a população da Cidade: \n");
    scanf("%d" , &populacao);
    
    printf("Digite a área da Cidade: \n");
    scanf("%f" , &area_em_km2);
    
    printf("Digite o PIB da Cidade: \n");
    scanf("%f" , &pib);
    
    printf("Digite o número de pontos turísticos da Cidade: \n");
    scanf("%d" , &numero_pontos_turisticos);

  // Área para exibição dos dados da cidade
  
      printf("O Estado é: %s\n" , estado);
      printf("O nome da Cidade é: %s\n" , nome_da_cidade);
      printf("O Codigo da carta é: %s\n" , codigo_da_carta);
      printf("A população da Cidade é: %d\n" , populacao);
      printf("A área da Cidade é: %f\n"  , area_em_km2);
      printf("O PIB da cidade é: %f\n"  , pib);
      printf("O número de pontos turísticos é: %d\n" , numero_pontos_turisticos);
  
return 0;
} 
