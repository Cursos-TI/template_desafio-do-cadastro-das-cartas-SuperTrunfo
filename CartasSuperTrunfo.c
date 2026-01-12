#include <stdio.h>

int main()
{
  char state, state2;
  char state3;
  char cardCode[4], cardCode2[4], city[10], city2[10];
  int population, population2;
  float area, area2, pib, pib2, places, places2;

  printf("Seja bem vindo ao super trunfo! \n");

  //Cadastro da primeira carta
  printf("Digite uma letra de A a H: ");
  scanf("%c", &state);

  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf("%s", cardCode);

  printf("Digite o nome da cidade: ");
  scanf("%s", city);

  printf("Digite o número de habitantes: ");
  scanf("%d", &population);

  printf("Digite a área da cidade: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);
  
  printf("Digite o número de pontos turístisticos da cidade: ");
  scanf("%f", &places);


  // Exibição da primeira carta
  printf("Estado: %c\n", state);
  printf("Código: %s\n", cardCode);
  printf("Nome da cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %fKm²\n ", area);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %f\n", places);

  printf("Vamos para a segunda carta\n");

  //Cadastro da segunda carta
  printf("Digite uma letra de A a H: ");
  scanf(" %c", &state2);

  printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf(" %s", cardCode2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", city2);

  printf("Digite o número de habitantes: ");
  scanf(" %d", &population2);

  printf("Digite a área da cidade: ");
  scanf(" %f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &pib2);
  
  printf("Digite o número de pontos turístisticos da cidade: ");
  scanf(" %f", &places2);

  // Exibição da segunda carta
  printf("Estado: %c\n", state2);
  printf("Código: %s\n", cardCode2);
  printf("Nome da cidade: %s\n", city2);
  printf("População: %d\n", population2);
  printf("Área: %fKm²\n ", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de pontos turísticos: %f\n", places2);

  return 0
}
