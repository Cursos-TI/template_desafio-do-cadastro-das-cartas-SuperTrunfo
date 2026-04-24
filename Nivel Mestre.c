#include <stdio.h>

int main() {

// DECLARAÇÃO DAS VARIÁVEIS DA CARTA 1

char Estado1 ;                    // Letra representando o estado
char Codigo_da_Carta1[5] ;       // Código da carta (ex: A01)
char Cidade1[30] ;               // Nome da cidade
unsigned long int Populacao1 ;   // População total
float Area1 ;                    // Área em km²
float PIB1 ;                     // PIB em milhões
int Pontos_Turisticos1 ;         // Quantidade de pontos turísticos
float Densidade_Populacional1 ;  // Habitantes por km²
float PIB_per_capita1 ;          // PIB dividido pela população
float Super_Poder1;              // Soma dos atributos principais
float Densidade_Invertida1;      // Inverso da densidade

// DECLARAÇÃO DAS VARIÁVEIS DA CARTA 2

char Estado2 ;
char Codigo_da_Carta2[5] ;
char Cidade2[30] ; 
unsigned long int Populacao2 ;
float Area2  ; 
float PIB2 ;
int Pontos_Turisticos2 ;
float Densidade_Populacional2 ;
float PIB_per_capita2 ;
float Super_Poder2;
float Densidade_Invertida2;

// LEITURA DOS DADOS DA CARTA 1

printf("Digite o Estado da Carta 1 (Letra Inicial): ");
scanf(" %c", &Estado1);

printf("Digite o Codigo da Carta 1 (Letra do Estado seguida de um numero de 01 a 04): ");
scanf("%4s", Codigo_da_Carta1);

printf("Digite a Cidade da Carta 1: ");
scanf(" %29[^\n]", Cidade1);

printf("Digite a Populacao da Carta 1: ");
scanf("%lu", &Populacao1);

printf("Digite a Area da Carta 1 (Ex: 1521.11): ");
scanf("%f", &Area1);

printf("Digite o PIB da Carta 1 (Em milhoes, use ponto decimal): ");
scanf("%f", &PIB1);

printf("Digite a quantidade dos Pontos Turisticos da Carta 1: ");
scanf("%d", &Pontos_Turisticos1);

// CÁLCULOS DA CARTA 1

// Fórmula da densidade: população ÷ área
Densidade_Populacional1 =  (float) Populacao1 / Area1;

// Quanto menor a densidade, maior o valor invertido
Densidade_Invertida1 = 1.0 / Densidade_Populacional1;

// PIB dividido pela quantidade de habitantes
PIB_per_capita1 = PIB1 / Populacao1;

// Soma de todos os atributos exigidos no desafio
Super_Poder1 = Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIB_per_capita1 + Densidade_Invertida1;

// EXIBIÇÃO DOS DADOS DA CARTA 1

printf("\n--- Carta 1 ---\n");
printf("Estado: %c\n", Estado1);
printf("Codigo da Carta: %s\n", Codigo_da_Carta1);
printf("Cidade: %s\n", Cidade1);
printf("Populacao: %lu\n", Populacao1);
printf("Area: %.2f km\n", Area1);
printf("PIB: RS %.2f Milhoes\n", PIB1);
printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
printf("PIB Per Capita: %.2f\n", PIB_per_capita1);
printf("A densidade inversa populacional e de: %.6f\n", Densidade_Invertida1);
printf("Pontuacao Super Poder: %.3f\n", Super_Poder1);

// LEITURA DOS DADOS DA CARTA 2

printf("Digite o Estado da Carta 2 (Letra Inicial):");
scanf(" %c", &Estado2);

printf("Digite o Codigo da Carta 2 (Letra do Estado seguida de um numero de 01 a 04): ");
scanf("%4s", Codigo_da_Carta2);

printf("Digite a Cidade da Carta 2: ");
scanf(" %29[^\n]", Cidade2);       

printf("Digite a Populacao da Carta 2: ");
scanf("%lu", &Populacao2);

printf("Digite a Area da Carta 2 (Ex: 1521.11): ");
scanf("%f", &Area2);

printf("Digite o PIB da Carta 2 (Em R$ Milhoes): ");
scanf("%f", &PIB2);

printf("Digite a quantidade dos Pontos Turisticos da Carta 2: ");
scanf("%d", &Pontos_Turisticos2);

// CÁLCULOS DA CARTA 2

Densidade_Populacional2 =  (float) Populacao2 / Area2;

Densidade_Invertida2 = 1.0 / Densidade_Populacional2;

PIB_per_capita2 = PIB2 / Populacao2;

Super_Poder2 = Populacao2 + Area2 + PIB2 + Pontos_Turisticos2 + PIB_per_capita2 + Densidade_Invertida2;

// EXIBIÇÃO DOS DADOS DA CARTA 2

printf("\n--- Carta 2 ---\n");
printf("Estado: %c\n", Estado2);
printf("Codigo da Carta: %s\n", Codigo_da_Carta2);
printf("Cidade: %s\n", Cidade2);
printf("Populacao: %lu\n", Populacao2);
printf("Area: %.2f km\n", Area2);
printf("PIB: RS %.2f Milhoes\n", PIB2);
printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
printf("PIB Per Capita: %.2f\n", PIB_per_capita2);
printf("A densidade inversa populacional e de: %.6f\n", Densidade_Invertida2);
printf("Pontuacao Super Poder: %.3f\n", Super_Poder2);


// ==============================================
// COMPARAÇÃO ENTRE AS CARTAS
// Regra geral: maior valor vence
// Exceção: densidade populacional (menor vence)
// ==============================================

int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPIBPER, resultadoSuper;

resultadoPopulacao = Populacao1 > Populacao2;
resultadoArea = Area1 > Area2;
resultadoPIB = PIB1 > PIB2;
resultadoPontosTuristicos = Pontos_Turisticos1 > Pontos_Turisticos2;
resultadoDensidadePopulacional = Densidade_Populacional1 < Densidade_Populacional2;
resultadoPIBPER =  PIB_per_capita1 > PIB_per_capita2;
resultadoSuper = Super_Poder1> Super_Poder2;


// ====================================
// RESULTADO FINAL DAS COMPARAÇÕES
// Se resultado = 1 -> Carta 1 venceu
// Se resultado = 0 -> Carta 2 venceu
// ===================================

printf("===== Comparacao das Cartas =====\n");

printf("Populacao: Carta %d venceu (%d)\n", 2 - resultadoPopulacao, resultadoPopulacao);
printf("Area: Carta %d Venceu (%d)\n", 2 - resultadoArea, resultadoArea);
printf("PIB: Carta %d Venceu (%d)\n", 2 - resultadoPIB, resultadoPIB);
printf("Pontos Turisticos: Carta %d Venceu (%d)\n", 2 - resultadoPontosTuristicos, resultadoPontosTuristicos);
printf("Densidade Populacional: Carta %d Venceu (%d)\n", 2 - resultadoDensidadePopulacional, resultadoDensidadePopulacional);
printf("PIB per Capita: Carta %d Venceu (%d)\n", 2 - resultadoPIBPER, resultadoPIBPER);
printf("Super Poder: Carta %d Venceu (%d)\n", 2 - resultadoSuper, resultadoSuper);

return 0;
}