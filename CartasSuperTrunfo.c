#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int carta;
char estado[1];
char codigo_da_carta [5];
char nome_cidade[15];
int populacao;
float area;
float pib;
int numero_de_pontos_turisticos;

  // Área para entrada de dados
printf("Bem vindo ao jogo de SuperTrunfo!\nNessa primeira etapa, vamos cadastrar os dados das cidades, para isso siga as estapas descritas abaixo.\n");
printf("\nInforme o número da carta\n");
scanf("%d",&carta);

printf("Cada estado será representado, por uma letra entre A e H\nDigite uma letra entre A e H\n");
scanf("%s",estado);

printf("Cada cidade recebe um código vinculado ao seu estado.\nExemplo se voce informou estado A, e vai cadastrar a primeira cidade do estado A, o código da cidade será A01\n");
printf("Digite o código da cidade a ser cadastrada\n");
scanf("%s",codigo_da_carta);

printf("Digite o nome da cidade\n");
scanf(" %s ",nome_cidade);

printf("Digite o tamanho da população da cidade (formato número inteiro)\n");
scanf("%d",&populacao);

printf("Digite o tamanho da area da cidade (formato número decimal)\n");
scanf("%f",&area);

printf("Digite o PIB (formato número decimal)\n");
scanf("%f",&pib);

printf("Digite a quantidade de pontos turisticos (formato número inteiro))\n");
scanf("%d",&numero_de_pontos_turisticos);
  // Área para exibição dos dados da cidade

printf("\nCarta: %d\n",carta);
printf("Código: %s\n",codigo_da_carta);
printf("Nome da Cidade: %s\n",nome_cidade);
printf("População: %d\n",populacao);
printf("Área: %f\n",area);
printf("PIB: %f\n",pib);
printf("Número de pontos turísticos: %d\n",numero_de_pontos_turisticos);
return 0;
} 
