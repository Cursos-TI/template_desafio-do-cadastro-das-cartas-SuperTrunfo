#include <stdio.h>


int main() {
     char Estado1;
     char CodigoCarta1[3];
     char Cidade1[20];
     unsigned long int populacao1;
     float km1;
     float PIB1;
     int PontoTusistico1;
     float DensidadePopul1;
     float PIBperCapita1;
     float SuperPoder1;

     //Carta 02
     char Estado2;
     char CodigoCarta2[3];
     char Cidade2[20];
     unsigned long int populacao2;
     float Km2;
     float PIB2;
     int PontoTuristico2;
     float DensidadePopul2;
     float PIBperCapita2;
     float SuperPoder2;

     //ENTRADA
     scanf("%c", &Estado1);
     scanf("%s", CodigoCarta1);
     scanf("%lu", &populacao1);
     scanf("%f", &km1);
     scanf("%f", &PIB1);
     scanf("%d", &PontoTusistico1);

     DensidadePopul1 = (float)populacao1 / km1;
     PIBperCapita1 = PIB1 / (float)populacao1;

     //SUPER PODER 1 
     SuperPoder1 = (float)populacao1 + km1 + PIB1 + PIBperCapita1 + PIBperCapita1 + (1 / DensidadePopul1);

     printf("\nCarta 02: \n\n");

     scanf("%c", &Estado2);
     scanf("%s", CodigoCarta2);
     scanf("%s", Cidade2);
     scanf("%lu", &populacao2);
     scanf("%f", &Km2);
     scanf("%f", &PIB2);
     scanf("%d", &PontoTuristico2);

     DensidadePopul2 = (float)populacao2 / Km2;
     PIBperCapita2 = PIB2 / (float)populacao2;
     
     //SUPER PODER 2
     SuperPoder2 = (float)populacao2 + Km2 + PIB2 + PontoTuristico2 + PIBperCapita2 + (1 / DensidadePopul2);


     printf("\nComparação de Cartas:\n\n");

  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", km1 > Km2);
  printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontoTusistico1 > PontoTuristico2);

  // REGRA INVERTIDA
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", DensidadePopul1 < DensidadePopul2);

  printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

  return 0;
}