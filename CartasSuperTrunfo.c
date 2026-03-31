#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int cidade1_populacao, cidade1_area, pontos_cidade1;
char cidade1_nome[50], estado1_nome[50], codigocarta1[10];
float cidade1_pib, area1_densidade;  


  // Área para entrada de dados
  printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Estados!\n");
  printf("Vamos começar cadastrando o primeiro estado.\n");
  printf("Digite o nome do estado 1: \n");
  scanf("%s", estado1_nome);
  printf("Digite o código da carta do estado 1: \n");
  scanf("%s", codigocarta1);
  printf("Agora vamos cadastrar a cidade do estado 1.\n");
  printf("Digite o nome da cidade 1: \n");
  scanf("%s", cidade1_nome);
  printf("Digite a população da cidade 1: \n");
  scanf("%d", &cidade1_populacao);
  printf("Digite a área da cidade 1: \n");
  scanf("%d", &cidade1_area);
  printf("Digite o PIB da cidade 1: \n");
  scanf("%f", &cidade1_pib); 
  printf("Numero de pontos turisticos da cidade 1: \n");
  scanf("%d", &pontos_cidade1); 
  printf("Cadastro do estado e cidade concluído com sucesso!\n\n");
  

  // Área para exibição dos dados da cidade
  printf("Informações do estado cadastrado:\n");
  printf("Estado: %s\n", estado1_nome);
  printf("Código da carta: %s\n", codigocarta1);
  printf("Informações da cidade cadastrada:\n"); 
  printf("Cidade: %s\n", cidade1_nome);
  printf("População: %d\n", cidade1_populacao);
  printf("Área: %d km²\n", cidade1_area);
  printf("PIB: %.2f\n", cidade1_pib);
  printf("Pontos turísticos: %d\n", pontos_cidade1);


return 0;
} 