#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {  
  char estado[30];
   /* char codigo[50]; 
    char nomeDaCidade[50];
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;*/
  // Área para entrada de dados
    printf("Digite o estado: \n");
    scanf("%s", &estado);
    
  // Área para exibição dos dados da cidade
printf("O estado é: %c\n", estado);

  return 0;
} 
