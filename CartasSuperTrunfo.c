#include <stdio.h>

int main(){
  char tipo [10] = "prata";
  int codigo = 2;
  float populacao = 67.480000; 
  int turisticos = 30;
  char estado [10] = "RJ";
  char carta [10] = "A02";
  char cidade [20] = "Rio de Janeiro";
  float area = 1200.25;
  float pib = 300.50;

  printf("Tipo da carta: %s.\n",tipo);
  printf("Estado: %s.\n",estado);
  printf("Codigo da carta: %s.\n",carta);
  printf("Cidade: %s.\n",cidade);
  printf("Populacao: %.5f.\n",populacao);
  printf("Area: %.2f.\n",area);
  printf("PIB: %.5f.\n",pib);
  printf("Pontos Turisticos: %d.\n",turisticos);
}