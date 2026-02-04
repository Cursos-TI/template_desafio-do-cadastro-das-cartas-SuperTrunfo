#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[2], estado2[2], codigo1[4], codigo2[4], cidade1[12], cidade2[12];
    unsigned int populacao1, populacao2, turismo1, turismo2, comparador;
    float superpoder1, superpoder2, pib1, pib2, area1, area2, densidade1, densidade2, inversoden1, inversoden2, ppc1, ppc2;
  
  // Área para entrada de dados
    printf("Insira os dados de duas cartas: \nCarta 1: \nDigite uma letra (entre A e H) que representa um dos oito estados: \nA: Ceará \nB: Pernambuco \nC: Goiás \nD: Rondônia \nE: Bahia \nF: Paraná \nG: Amazonas \n");
    scanf("%s", &estado1);
    
    printf("Digite o Código da Carta (a letra do estado junto com o número entre 01 e 04): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes da sua cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade (em milhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &turismo1);

    densidade1 = (float) (populacao1 / area1);
    
    ppc1 = (float) (pib1 * 1000000000) / populacao1;
    
    inversoden1 = 1 / densidade1;
    
    superpoder1 = populacao1 + area1 + pib1 + inversoden1 + ppc1 + turismo1;

    printf("Carta 2: \nDigite uma letra (entre A e H) que representa um dos oito estados: \nA: Ceará \nB: Pernambuco \nC: Goiás \nD: Rondônia \nE: Bahia \nF: Paraná \nG: Amazonas \n");
    scanf("%s", &estado2);
    
    printf("Digite o Código da Carta (a letra do estado junto com o número entre 01 e 04): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade (em milhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &turismo2);

    densidade2 = (float)(populacao2 / area2);

    ppc2 = (float)(pib2 * 1000000000) / populacao2;

    inversoden2 = 1 / densidade2;

    superpoder2 = populacao2 + area2 + pib2 + inversoden2 + ppc2 + turismo2;

  // Área para exibição dos dados da cidade
    printf("Carta1: \nEstado: %s \n", estado1);
    printf("Código da Carta: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB: R$ %.2f bilhões de reais \n", pib1);
    printf("PIB per Capita: R$ %.2f reais \n", ppc1);
    printf("Número de pontos turísticos: %i \n \n", turismo1);

    printf("Carta2: \nEstado: %s \n", estado2);
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB: R$ %.2f bilhões de reais \n", pib2);
    printf("PIB per Capita: R$ %.2f reais \n", ppc2);
    printf("Número de pontos turísticos: %i \n \n", turismo2);

    printf("Escolha o atributo para comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("6. Ponto(s) Turístico(s)\n");
    printf("7. SuperPoder\n");
    scanf("%d", &comparador);

    switch (comparador)
    {
    case 1:
        printf("Comparação entre as populações\n \n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    }else{
        printf("População: Carta 2 venceu(%d)\n", populacao1 > populacao2);
    }
    break;
    
    case 2:
        printf("Comparação entre as áreas\n \n");
    if(area1 > area2){
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    }else{
        printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    }
    break;
    
    case 3:
        printf("Comparação entre as densidades populacionais\n \n");
    if (densidade1 < densidade2){
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    }else{
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    }
    break;
    
    case 4:
        printf("Comparação entre os PIBs\n \n");
    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    }else{
        printf("PIB: Carta 2 venceu (%d)\n", pib1 > pib2);
    }
    break;
    
    case 5:
        printf("Comparação entre os Pib Per Capita\n \n");
     if (ppc1 > ppc2){
        printf("PIB per Capita: Carta 1 venceu (%d)\n", ppc1 > ppc2);
    }else{
        printf("PIB per Capita: Carta 2 venceu (%d)\n", ppc1 > ppc2);

    }
    break;
    
    case 6:
        printf("Comparação entre os Pontos Turísticos\n \n");
    if (turismo1 > turismo2){
        printf("Turísticos: Carta 1 venceu(%d)\n",turismo1 > turismo2);
    }else{
        printf("Turísticos: Carta 2 venceu(%d)\n",turismo1 > turismo2);
    }
    break;

    case 7:
        printf("Comparação entre os SuperPoderes\n \n");
    if(superpoder1 > superpoder2){
        printf("SuperPoder: Carta 1 venceu (%d)", superpoder1 > superpoder2);
    }else{
        printf("SuperPoder: Carta 2 venceu (%d)", superpoder1 > superpoder2);
    }
    break;
    
    default:
        printf("Opção Inválida!");  return 0;
    break;
    }



return 0;
} 
