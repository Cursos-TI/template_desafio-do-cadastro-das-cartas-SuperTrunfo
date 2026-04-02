#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

// Variaveis 1° CARTA

char estado1[50], codigo1[50], nome1[50]; 
int populacao1, pontosturisticos1;
float area1, pib1; 

// Variaveis 2° CARTA

char estado2[50], codigo2[50], nome2[50], inicio[50]; 
int populacao2, pontosturisticos2;
float area2, pib2; 

// Área para entrada de dados 1° Carta

printf("Super Trunfo \n");

printf("Cadastro das Cartas\n"); 

printf("\nCarta 1\n");

printf("Digite a letra do estado: ");
scanf("%s", estado1);

printf("Digite o codigo do estado: ");
scanf("%s", codigo1);

printf("Digite o nome Da cidade: "); // EX (São Paulo) sem espaço entre as palavras
scanf("%s", nome1);

printf("Digite o numero da população: ");
scanf("%d", &populacao1);

printf("Digite a área em km²: ");
scanf("%f", &area1);

printf("Digite o Pib: ");
scanf("%f", &pib1);

printf("Quantos Pontos Turisticos: ");
scanf("%d", &pontosturisticos1);

// Área para entrada de dados 2° Carta

printf("\nCarta 2");

printf("\nDigite a letra do estado: "); // Uma letra de (A - H)
scanf("%s", estado2);

printf("Digite o codigo do estado: ");
scanf("%s", codigo2);

printf("Digite o nome Da cidade: "); // EX: (São Paulo) sem espaço entre as palavras
scanf("%s", nome2);

printf("Digite o numero da população: ");
scanf("%d", &populacao2);

printf("Digite a área em km²: "); //Area em km² ate 2 casas decimais
scanf("%f", &area2);

printf("Digite o Pib: "); //Pib ate 2 casas decimais
scanf("%f", &pib2);

printf("Quantos Pontos Turisticos: ");
scanf("%d", &pontosturisticos2);

//Calculo de Densidade Populacional e Pib per capita para as cartas
 
float densidade1 = populacao1 / area1;
float pibpercapita1 = (pib1 * 1000000000) / populacao1;
float densidade2 = populacao2 / area2;
float pibpercapita2 = (pib2 * 1000000000) / populacao2;  

// Calculando Super Poder

float superpodercarta1;
float superpodercarta2;

superpodercarta1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 * densidade1));
superpodercarta2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 * densidade2));

// Exibir as informações da carta 1 e carta 2 utilizando printf

printf("\nCarta 1:\n");
printf("Estado:%s \nCódigo:%s \nNome:%s\nPopulação:%d" ,estado1,codigo1,nome1,populacao1);
printf("\nÁrea:%.2f Km²\nPib:%.2f bilhões de reais \nPontos Turísticos:%d \n",area1,pib1,pontosturisticos1);
printf("Densidade Populacional: %.2f hab/Km²\nPib Per Capita: %.2f reais\n",densidade1,pibpercapita1);
printf("SuperPoder: %.2f\n",superpodercarta1);

printf("\nCarta 2:\n");
printf("Estado:%s \nCódigo:%s \nNome:%s\nPopulação:%d" ,estado2, codigo2, nome2, populacao2);
printf("\nÁrea:%.2f Km²\nPib:%.2f bilhões de reais \nPontos Turísticos:%d \n",area2,pib2,pontosturisticos2);
printf("Densidade Populacional: %.2f hab/Km²\nPib Per Capita: %.2f reais\n",densidade2,pibpercapita2);
printf("Superpoder: %.2f\n",superpodercarta2); 


//Comparando atributos

int resultadoPopulacao = (populacao1 > populacao2);
int resultadoArea = (area1 > area2);
int resultadoPib = (pib1 > pib2);
int resultadoPontosTuristicos = (pontosturisticos1 > pontosturisticos2);
int resultadoPibPerCapita = (pibpercapita1 > pibpercapita2);
int resultadoDensidade = (densidade1 < densidade2); // MENOR DENSIDADE POPULACIONAL É MELHOR
int resultadopibpercapita = (pibpercapita1 > pibpercapita2);
int resultadoSuperPoder = (superpodercarta1 > superpodercarta2);

printf("\nComparação dos Atributos:\n");
printf("POPULAÇÃO: %d\n", resultadoPopulacao);
printf("Area: %d\n", resultadoArea);
printf("PIB: %d\n", resultadoPib);
printf("PONTOS TURÍSTICOS: %d\n", resultadoPontosTuristicos);
printf("PIB PER CAPITA: %d\n", resultadoPibPerCapita);
printf("DENSIDADE POPULACIONAL: %d\n", resultadoDensidade);
printf("SUPER PODER: %d\n", resultadoSuperPoder);

return 0;

}