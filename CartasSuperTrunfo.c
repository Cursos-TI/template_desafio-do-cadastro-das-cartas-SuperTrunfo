#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char state,state2;
  char codigoState[6], cidade[70], codigoState2[6], cidade2[70];
  int pontosTuristico, pontosTuristico2;
  unsigned long int population, population2;
  float areaKM,PIB, areaKM2, PIB2,densidade,densidade2,PIBCapita,PIBCapita2,superPoderA,superPoderB;

  // INFORMACOES CARTA 01

  printf("Ola! Digite uma letra entre A e H: ");
  scanf(" %c", &state);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %lu", &population);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico);

  densidade = population/areaKM;
  PIBCapita = PIB/population;

  superPoderA = population + areaKM + pontosTuristico + PIB + PIBCapita + (1 / densidade);

  // INFORMACOES PARA CARTA 02
  printf("\n\nVamos para carta 02!\nDigite uma letra entre A e H: ");
  scanf(" %c", &state2);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState2);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %lu", &population2);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM2);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB2);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico2);

  densidade2 = population2/areaKM2;
  PIBCapita2 = PIB2/population2;

  superPoderB = population2 + areaKM2 + pontosTuristico2 + PIB2 + PIBCapita2 + (1 / densidade2);

  // Área para CARTA 01 exibição dos dados da cidade
  printf("\nCarta 01");
  printf("\nEstado: %c",state);
  printf("\nCodigo: %c%s",state,codigoState);
  printf("\nCidade: %s",cidade);
  printf("\nPopulacao: %lu habitantes",population);
  printf("\nArea: %f km²",areaKM);
  printf("\nPIB: %f bilhões de reais",PIB);
  printf("\nPontos Turisticos: %d",pontosTuristico);
  printf("\nDensidade Populacional: %.2f hab/km²",densidade);
  printf("\nPIB per Capita: R$%.2f reais",PIBCapita);

  // Área para CARTA 02 exibição dos dados da cidade

  printf("\n\nCarta 02");
  printf("\nEstado: %c",state2);
  printf("\nCodigo: %c%s",state2,codigoState2);
  printf("\nCidade: %s",cidade2);
  printf("\nPopulacao: %lu habitantes",population2);
  printf("\nArea: %f km²",areaKM2);
  printf("\nPIB: %f bilhões de reais",PIB2);
  printf("\nPontos Turisticos: %d",pontosTuristico2);
  printf("\nDensidade Populacional: %.2f hab/km²",densidade2);
  printf("\nPIB per Capita: R$%.2f reais",PIBCapita2);


// INCLUINDO LOGICA IF - ELSE

if (population > population2)
{
  printf("\n\nPOPULACAO:");
  printf("\nCARTA 01 (%s): %lu \n",cidade,population);
  printf("CARTA 02 (%s): %lu \n", cidade2,population2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nPOPULACAO:");
  printf("\nCARTA 01 (%s): %lu \n",cidade,population);
  printf("CARTA 02 (%s): %lu \n", cidade2,population2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (areaKM > areaKM2)
{
  printf("\n\nAREA KM:");
  printf("\nCARTA 01 (%s): %f \n",cidade,areaKM);
  printf("CARTA 02 (%s): %f \n", cidade2,areaKM2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nAREA KM:");
  printf("\nCARTA 01 (%s): %f \n",cidade,areaKM);
  printf("CARTA 02 (%s): %f \n", cidade2,areaKM2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (PIB > PIB2)
{
  printf("\n\nPIB:");
  printf("\nCARTA 01 (%s): %f \n",cidade,PIB);
  printf("CARTA 02 (%s): %f \n", cidade2,PIB2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nPIB:");
  printf("\nCARTA 01 (%s): %f \n",cidade,PIB);
  printf("CARTA 02 (%s): %f \n", cidade2,PIB2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (pontosTuristico > pontosTuristico2)
{
  printf("\n\nPONTOS TURISTICOS:");
  printf("\nCARTA 01 (%s): %d \n",cidade,pontosTuristico);
  printf("CARTA 02 (%s): %d \n", cidade2,pontosTuristico2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nPONTOS TURISTICOS:");
  printf("\nCARTA 01 (%s): %d \n",cidade,pontosTuristico);
  printf("CARTA 02 (%s): %d \n", cidade2,pontosTuristico2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (densidade < densidade2)
{
  printf("\n\nDENSIDADE:");
  printf("\nCARTA 01 (%s): %f \n",cidade,densidade);
  printf("CARTA 02 (%s): %f \n", cidade2,densidade2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nDENSIDADE:");
  printf("\nCARTA 01 (%s): %f \n",cidade,densidade);
  printf("CARTA 02 (%s): %f \n", cidade2,densidade2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (PIBCapita > PIBCapita2)
{
  printf("\n\nPIB PER CAPITA:");
  printf("\nCARTA 01 (%s): %f \n",cidade,PIBCapita);
  printf("CARTA 02 (%s): %f \n", cidade2,PIBCapita2);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nPIB PER CAPITA:");
  printf("\nCARTA 01 (%s): %f \n",cidade,PIBCapita);
  printf("CARTA 02 (%s): %f \n", cidade2,PIBCapita2);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}

if (superPoderA > superPoderB)
{
  printf("\n\nSUPER POWER:");
  printf("\nCARTA 01 (%s): %f \n",cidade,superPoderA);
  printf("CARTA 02 (%s): %f \n", cidade2,superPoderB);
  printf("CARTA 01 (%s) VENCEU!",cidade);
}else{
  printf("\n\nSUPER POWER:");
  printf("\nCARTA 01 (%s): %f \n",cidade,superPoderA);
  printf("CARTA 02 (%s): %f \n", cidade2,superPoderB);
  printf("CARTA 02 (%s) VENCEU!",cidade2);
}


} 
