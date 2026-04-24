#include <stdio.h>

int main() {

// CARTA 1

char Estado1 ;
char Codigo_da_Carta1[5] ;
char Cidade1[30] ;
int Populacao1 ;
float Area1 ;
float PIB1 ;
int Pontos_Turisticos1 ;
float Densidade_Populacional1 ;
float PIB_per_capita1 ;

// CARTA 2

char Estado2 ;
char Codigo_da_Carta2[5] ;
char Cidade2[30] ; 
int Populacao2 ;
float Area2  ; 
float PIB2 ;
int Pontos_Turisticos2 ;
float Densidade_Populacional2 ;
float PIB_per_capita2 ;

// Leitura dos dados da carta 1

printf("Digite o Estado da Carta 1 (Letra Inicial): ");
scanf(" %c", &Estado1); // Lê um único caractere (estado)

printf("Digite o Codigo da Carta 1 (Letra do Estado seguida de um numero de 01 a 04): ");
scanf("%4s", Codigo_da_Carta1); // Limita a leitura para evitar overflow

printf("Digite a Cidade da Carta 1: ");
scanf(" %29[^\n]", Cidade1); // Lê string com espaços até 29 caracteres

printf("Digite a Populacao da Carta 1: ");
scanf("%d", &Populacao1); // Lê valor inteiro

printf("Digite a Area da Carta 1 (Ex: 1521.11): ");
scanf("%f", &Area1); // Lê valor decimal (float)

printf("Digite o PIB da Carta 1 (Em milhoes, use ponto decimal): ");
scanf("%f", &PIB1); // PIB em milhões

printf("Digite a quantidade dos Pontos Turisticos da Carta 1: ");
scanf("%d", &Pontos_Turisticos1);

// Cálculo da densidade populacional (habitantes por km²)
Densidade_Populacional1 =  (float) Populacao1 / Area1;

// Cálculo do PIB per capita (PIB dividido pela população)
PIB_per_capita1 = PIB1 / Populacao1;

// Resultado da carta 1

printf("\n--- Carta 1 ---\n");
printf("Estado: %c\n", Estado1);
printf("Codigo da Carta: %s\n", Codigo_da_Carta1);
printf("Cidade: %s\n", Cidade1);
printf("Populacao: %d\n", Populacao1);
printf("Area: %.2f km²\n", Area1); // Exibe com 2 casas decimais
printf("PIB: RS %.2f Milhoes\n", PIB1);
printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional1); // Resultado formatado
printf("PIB Per Capita: %.2f\n", PIB_per_capita1); // Resultado formatado

// Leitura dos dados da carta 2

printf("Digite o Estado da Carta 2 (Letra Inicial): ");
scanf(" %c", &Estado2);

printf("Digite o Codigo da Carta 2 (Letra do Estado seguida de um numero de 01 a 04): ");
scanf("%4s", Codigo_da_Carta2);

printf("Digite a Cidade da Carta 2: ");
scanf(" %29[^\n]", Cidade2);       

printf("Digite a Populacao da Carta 2: ");
scanf("%d", &Populacao2);

printf("Digite a Area da Carta 2 (Ex: 1521.11): ");
scanf("%f", &Area2);

printf("Digite o PIB da Carta 2 (Em R$ Milhoes): ");
scanf("%f", &PIB2);

printf("Digite a quantidade dos Pontos Turisticos da Carta 2: ");
scanf("%d", &Pontos_Turisticos2);

// Cálculo da densidade populacional da carta 2
Densidade_Populacional2 =  (float) Populacao2 / Area2;

// Cálculo do PIB per capita da carta 2
PIB_per_capita2 = PIB2 / Populacao2;

// Resultado da carta 2

printf("\n--- Carta 2 ---\n");
printf("Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n", Codigo_da_Carta2);
printf("Cidade: %s\n", Cidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area: %.2f km²\n", Area2);
printf("PIB: RS %.2f Milhoes\n", PIB2);
printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
printf("PIB Per Capita: %.2f\n", PIB_per_capita2);

return 0;
}