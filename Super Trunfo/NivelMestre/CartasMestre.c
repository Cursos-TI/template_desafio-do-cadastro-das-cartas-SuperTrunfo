#include <stdio.h>

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Váriaveis Carta 1//
    char Estado1[50];
    char Codigo1[10];
    char Cidade1[ 50];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos1;
    float Densidade1;
    float PibPerCapita1;
    float SuperPoder1;
    float DensidadeInvertida1;

    //Váriaveis carta 2//

    char Estado2[ 50];
    char Codigo2[ 10];
    char Cidade2[ 50];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos2;
    float Densidade2;
    float PibPerCapita2;
    float SuperPoder2;
    float DensidadeInvertida2;

  // Área para entrada de dados

      //-->Entrada e Saida Carta 1//

        //Carta1
    printf("CADASTRO CARTA 1:\n");
    printf ("\n");
    printf("Digite o estado (A-H):\n ");
    scanf(" %s", Estado1);
    printf("Digite o código da carta (ex:A01...A04):\n ");
    scanf(" %s", Codigo1);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite a população:\n ");
    scanf("%d", &Populacao1);
    printf("Digite a área (km²):\n ");
    scanf("%f", &Area1);
    printf("Digite o Pib:\n ");
    scanf("%f", &Pib1);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &Pontos1);

  //Calculo Densidade e Pib per capita - 1;
  Densidade1 =(float) Populacao1 / Area1;
  PibPerCapita1 = (Pib1 * 1000000000.0) / Populacao1;

  //Calculo Densidade Invertida e Super Poder;
  DensidadeInvertida1 = (float) 1.0 / Densidade1;
  SuperPoder1 = (float)Populacao1 + Area1 + Pib1 + PibPerCapita1 + (float)Pontos1 + DensidadeInvertida1;

  

      //-->Entrada e Saida Carta 2//

    printf("CADASTRO CARTA 2:\n");
    printf ("\n");
    printf("Digite o estado (A-H):\n ");
    scanf(" %s", Estado2);
    printf("Digite o código da carta (ex:B01...B04):\n");
    scanf(" %s", Codigo2);
    printf("Digite o nome da cidade:\n ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite a população:\n ");
    scanf("%d", &Populacao2);
    printf("Digite a área (km²):\n ");
    scanf("%f", &Area2);
    printf("Digite o Pib:\n ");
    scanf("%f", &Pib2);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &Pontos2);

      //Calculo Densidade e Pib per capita
  Densidade2 = (float) Populacao2 / Area2;
  PibPerCapita2 = (Pib2 * 1000000000.0) / Populacao2;

      //Calculo Densidade Invertida e Super Poder  
  DensidadeInvertida2 = (float) 1.0 / Densidade2;
  SuperPoder2 = (float)Populacao2 + Area2 + Pib2 + PibPerCapita2+ (float)Pontos2 + DensidadeInvertida2;
         
  // Área para exibição dos dados da cidade
      printf ("\n");
        // Dados da Carta 1 //
    printf("\n DADOS CARTA 1:\n");
    printf ("\n");
    printf("ESTADO: %s\n", Estado1);
    printf("CODIGO DA CARTA: %s\n", Codigo1);
    printf("NOME DA CIDADE: %s\n", Cidade1); 
    printf("POPULAÇÃO: %d\n", Populacao1);
    printf("ÁREA: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("PONTOS: %d\n", Pontos1);
    printf("DENSIDADE: %.2f hab/km²\n", Densidade1);
    printf("PIB PER CAPITA: R$ %.2f\n", PibPerCapita1);
    printf("SUPER PODER: %.2f", SuperPoder1);

      printf ("\n");
       // Dados da Carta 2 //
    printf("\n DADOS CARTA 2:\n");
    printf ("\n");
    printf("ESTADO: %s\n", Estado2);
    printf("CÓDIGO DA CARTA: %s\n ", Codigo2);
    printf("NOME DA CIDADE: %s\n", Cidade2); 
    printf("POPULAÇÃO: %d\n", Populacao2);
    printf("ÁREA: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("PONTOS: %d\n", Pontos2);
    printf("DENSIDADE: %.2f hab/km²\n", Densidade2);
    printf("PIB PER CAPITA: R$ %.2f\n", PibPerCapita2);
    printf("SUPER PODER: %.2f", SuperPoder2);
    printf ("\n");

    //Comparação entre as Cartas

    printf ("\n");
    printf("COMPARAÇÃO ENTRE CARTAS:");
    printf ("\n");
    printf("POPULAÇÃO: CARTA 1 VENCEU (%d)\n", Populacao1 > Populacao2);
    printf("ÁREA: CARTA 1 VENCEU (%d)\n", Area1 > Area2);
    printf("PIB: CARTA 1 VENCEU (%d)\n", Pib1 > Pib2);
    printf("PONTOS TURÍSTICOS: CARTA 1 VENCEU  (%d)\n", Pontos1 > Pontos2);
    printf("DENSIDADE POPULACIONAL: CARTA 2 VENCEU (%d)\n", Densidade1 < Densidade2);
    printf("PIB PERCAPITA: CARTA 1 VENCEU (%d)\n", PibPerCapita1 > PibPerCapita1);
    printf("SUPER PODER: CARTA 1 VENCEU (%d)\n", SuperPoder1 > SuperPoder2);

return 0;
} 
