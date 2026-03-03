#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char EstadoC1 [60]; 
 char EstadoC2 [60];
 char CodigoCartaC1 [4]; 
 char CodigoCartaC2 [4];
 char CidadeC1 [60]; 
 char CidadeC2 [60];
 float PopulacaoC1; 
 float PopulacaoC2;
 float AreaC1; 
 float AreaC2;
 float PIBc1; 
 float PIBc2;
 int PontosTuristicosC1; 
 int PontosTuristicosC2;
 float DensidadePopulacionalC1;
 float DensidadePopulacionalC2;
 float PIBperCapitaC1;
 float PIBperCapitaC2;

  // Área para entrada de dados
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                          Cadastro de Cartas                         \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");

  // - Cadastro Primeira Carta
  printf("Preencha o formulario a seguir da primeira carta.\n");
  printf("\n");

  printf ("Estado: ");
  scanf (" %59s", EstadoC1);

  printf ("Código da Carta (Letra do Estado + numero de '01' a '04'): ");
  scanf ("%4s", CodigoCartaC1);

  printf ("Cidade: ");
  scanf ("%59s", CidadeC1);
     
  printf ("População: ");
  scanf ("%f", &PopulacaoC1);

  printf ("Área (km²): ");
  scanf ("%f", &AreaC1);

  printf ("PIB: ");
  scanf ("%f", &PIBc1);

  printf ("Quantos Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicosC1);

  // - Cadastro Segunda Carta
  printf("Preencha o formulario a seguir da segunda carta.\n");
  printf("\n");

  printf("Estado: ");
  scanf(" %59s", EstadoC2);

  printf ("Código da Carta (Letra do Estado + numero de '01' a '04'): ");
  scanf ("%4s", CodigoCartaC2);

  printf ("Cidade: ");
  scanf ("%59s", CidadeC2);
     
  printf ("População: ");
  scanf ("%f", &PopulacaoC2);

  printf ("Área (km²): ");
  scanf ("%f", &AreaC2);

  printf ("PIB: ");
  scanf ("%f", &PIBc2);

  printf ("Quantos Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicosC2);

  //Calculo da Densidade Populacional e PIB per Capita
  DensidadePopulacionalC1 = PopulacaoC1 / AreaC1;
  DensidadePopulacionalC2 = PopulacaoC2 / AreaC2;
  PIBperCapitaC1 = PIBc1 / PopulacaoC1;
  PIBperCapitaC2 = PIBc2 / PopulacaoC2;

  // Área para exibição dos dados da cidade
  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Primeira Carta                           \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("Estado: %s \n", EstadoC1);
  printf("Código: %3s \n", CodigoCartaC1);
  printf("Cidade: %s \n", CidadeC1);
  printf("População: %.3f \n", PopulacaoC1);
  printf("Área: %.3f km²\n", AreaC1);
  printf("PIB: %.3f\n", PIBc1);
  printf("Pontos Turísticos: %d\n", PontosTuristicosC1);
  printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacionalC1);
  printf("PIB per Capita: %.2f\n", PIBperCapitaC1);

  printf("\n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("                            Segunda Carta                            \n");
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\n");
  printf("Estado: %s \n", EstadoC2);
  printf("Código: %3s \n", CodigoCartaC2);
  printf("Cidade: %s \n", CidadeC2);
  printf("População: %.3f \n", PopulacaoC2);
  printf("Área: %.3f km²\n", AreaC2);
  printf("PIB: %.3f\n", PIBc2);
  printf("Pontos Turísticos: %d\n", PontosTuristicosC2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacionalC2);
  printf("PIB per Capita: %.2f\n", PIBperCapitaC2);

return 0;
} 
