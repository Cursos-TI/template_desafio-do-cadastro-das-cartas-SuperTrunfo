// Projeto escrito e compilado em kernel Linux usando gcc
// gcc main.c -o registrador_cidades
#include <stdio.h>
int main() {
    
    // Definindo variaveis
    int habitantes = 0; // numero de habitantes
    float pib; // valor do pib 
    float area; // extensão da cidade em Km²
    int pontos_turisticos; // pontos turisticos
    char cidade[2]; // Introduzir o codigo da primeira cidade
    char nome[50]; // nome da cidade
    
    int habitantes_2 = 0;
    float pib_2;
    float area_2;
    int pontos_turisticos_2;
    char cidade_2[2]; // Introduzir o codigo da segunda cidade
    char nome_2[50];

  // Área para exibição dos dados da cidade
    printf("-----Registrar-Cidade------");
    printf("\n-----Primeira-Cidade-------");
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome);
    printf("Digite o numero de habitantes: ");
    scanf("%d",&habitantes);
    printf("\nDigite o valor do PIB: ");
    scanf("%f", &pib);
    printf("\nDigite a Area da cidade: ");
    scanf("%f", &area);
    printf("\nDigite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("\nEscolha uma letra de A-H: ");
    scanf("%s", cidade);
    
    //Entrada das informações da segunda c
    printf("\n------Registrar-cidade------ ");
    printf("\n-----Segunda-Cidade----------");
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", nome_2);
    printf("\nDigite o numero de Habitantes: ");
    scanf("%d", &habitantes_2);
    printf("\nDigite o valor do PIB: ");
    scanf("%f", &pib_2);
    printf("\nDigite a Area da cidade: ");
    scanf("%f", &area_2);
    printf("\nDigite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_2);
    printf("\nEscolha uma letra de A-H: ");
    scanf("%f",cidade_2);    
    int densidade_populacional = habitantes/area;
    int densidade_populacional2 = habitantes_2/area_2;
    
    float pib_capita = pib/habitantes;
    float pib_capita2 = pib_2/habitantes_2;

    printf("\n");
    printf(" Cidade %s01 \n nome:%s \n habitantes:%d \n PIB:%f",cidade,nome,habitantes,pib);
    printf("\nQtd.Pontos Turisticos:%d \n Area da cidade:%f \n densidade populacional:%d \n PIB per capita:%f \n",pontos_turisticos, area,densidade_populacional,pib_capita);
    printf("\n");
    printf("\nCidade %s02 \n nome:%s \n habitantes:%d \n PIB:%f \n Densidade populacional:%d \n PIB per capita:%f \n",cidade_2,nome_2,habitantes_2,pib_2,densidade_populacional2,pib_capita2);
    printf("\nQtd.Pontos Turisticos:%d \n Area da cidade:%f",pontos_turisticos_2, area_2);
 
    
return 0;
} 
