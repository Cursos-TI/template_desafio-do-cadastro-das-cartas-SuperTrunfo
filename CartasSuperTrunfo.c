#include <stdio.h>

int main(){

  
  
  char estado1[10];
  char nomeCidade1[10];
  char codigo01[04];
  int populacao1;
  float area01;
  float pib1;
  int pontosTuristicos1;

  printf("-- CARTA 01 --\n");

  printf("Digite o estado:\n");
  scanf("%s", estado1);

   printf("digite código:\n");
  scanf("%s", codigo01);

  printf("digite nome da cidade:\n");
  scanf("%s", nomeCidade1);

  printf("Digite a população:\n");
  scanf("%d", &populacao1 );

  printf(" digite a área (km²):\n");
  scanf("%f", &area01);

  printf("Digite pib:\n");
  scanf("%f", &pib1);
  
  printf("Digite quantos pontos turísticos\n");
  scanf("%d", &pontosTuristicos1 );



  printf("--CARTA 1--\n");
  printf("Estado: %s \n ", estado1 );
  printf("Código: %s \n ", codigo01 );
  printf("Nome da cidade : %s \n", nomeCidade1);
  printf("População: %d \n", populacao1);
  printf("Area (km²) %f \n", area01);
  printf("PIB atual: %f \n", pib1);
  printf("Numero de pontos Turísticos: %d \n", pontosTuristicos1);
  printf(" -- FIM CARTA 01 -- ");
  

return 0;



}
