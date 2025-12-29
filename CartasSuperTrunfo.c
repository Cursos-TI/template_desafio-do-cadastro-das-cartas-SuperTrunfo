#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[2], estado2[2], codigo1[4], codigo2[4], cidade1[12], cidade2[12];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2, densidade1, densidade2, ppc1, ppc2;
  
  // Área para entrada de dados
    printf("Insira os dados de duas cartas: \nCarta 1: \nDigite uma letra (entre A e H) que representa um dos oito estados: \nA: Ceará \nB: Pernambuco \nC: Goiás \nD: Rondônia \nE: Bahia \nF: Paraná \nG: Amazonas \n");
    scanf("%s", &estado1);
    
    printf("Digite o Código da Carta (a letra do estado junto com o número entre 01 e 04): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da sua cidade: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &turismo1);

    densidade1 = (float)(populacao1 / area1);
    ppc1 = (float)(pib1 / populacao1);

    printf("Carta 2: \nDigite uma letra (entre A e H) que representa um dos oito estados: \nA: Ceará \nB: Pernambuco \nC: Goiás \nD: Rondônia \nE: Bahia \nF: Paraná \nG: Amazonas \n");
    scanf("%s", &estado2);
    
    printf("Digite o Código da Carta (a letra do estado junto com o número entre 01 e 04): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da sua cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &turismo2);

    densidade2 = (float)(populacao2 / area2);
    ppc2 = (float)(pib2 / populacao2);

  // Área para exibição dos dados da cidade
    printf("Carta1: \nEstado: %s \n", estado1);
    printf("Código da Carta: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %i \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB: R$ %.2f reais \n", pib1);
    printf("PIB per Capita: R$ %.2f reais \n", ppc1);
    printf("Número de pontos turísticos: %i \n", turismo1);

    printf("Carta2: \nEstado: %s \n", estado2);
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB: R$ %.2f reais \n", pib2);
    printf("PIB per Capita: R$ %.2f reais \n", ppc2);
    printf("Número de pontos turísticos: %i \n", turismo2);

return 0;
} 
