#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char* estado1[2], estado2[2], codigo1[4], codigo2[4], cidade1[12], cidade2[12], resultado1, resultado2;
    unsigned int populacao1, populacao2, turismo1, turismo2, atribmenu1, atribmenu2;
    float superpoder1, superpoder2, pib1, pib2, area1, area2, densidade1, densidade2, inversoden1, inversoden2, ppc1, ppc2, atributo1, atributo2, atributo3, atributo4, resultadosoma1, resultadosoma2;
  
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

    //Calculo da densidade
    densidade1 = (float) (populacao1 / area1);
    
    //Calculo do pib per capita
    ppc1 = (float) (pib1 * 1000000000) / populacao1;
    
    //Calculo do inverso da densidade
    inversoden1 = 1 / densidade1;
    
    //Calculo do super poder
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

    //Calculo da densidade
    densidade2 = (float)(populacao2 / area2);

    //Calculo do pib per capita
    ppc2 = (float)(pib2 * 1000000000) / populacao2;

    //Calculo do inverso da densidade
    inversoden2 = 1 / densidade2;

    //Calculo do super poder
    superpoder2 = populacao2 + area2 + pib2 + inversoden2 + ppc2 + turismo2;

  // Área para exibição dos dados das cartas
    printf("Carta1: \nEstado: %s \n", estado1);
    printf("Código da Carta: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB: R$ %.0f bilhões de reais \n", pib1);
    printf("PIB per Capita: R$ %.2f reais \n", ppc1);
    printf("Número de pontos turísticos: %i \n \n", turismo1);

    printf("Carta2: \nEstado: %s \n", estado2);
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB: R$ %.0f bilhões de reais \n", pib2);
    printf("PIB per Capita: R$ %.2f reais \n", ppc2);
    printf("Número de pontos turísticos: %i \n \n", turismo2);

    //Escolhas dos atributos
    printf("Escolha o primeiro atributo\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("6. Ponto(s) Turístico(s)\n");
    printf("7. SuperPoder\n");
    scanf("%d", &atribmenu1);

    switch (atribmenu1)
       {
       case 1:
         printf("Você escolheu a opção População!\n\n");
         resultado1 = populacao1 > populacao2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("2. Área\n");
         printf("3. Densidade Populacional\n");
         printf("4. PIB\n");
         printf("5. PIB per Capita\n");
         printf("6. Ponto(s) Turístico(s)\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);
       break;

       case 2:
         printf("Você escolheu a opção Área!\n\n");
         resultado1 = area1 > area2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("3. Densidade Populacional\n");
         printf("4. PIB\n");
         printf("5. PIB per Capita\n");
         printf("6. Ponto(s) Turístico(s)\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);
       break;

       case 3:
         printf("Você escolheu a opção Densidade Populacional!\n\n");
         resultado1 = densidade1 < densidade2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("4. PIB\n");
         printf("5. PIB per Capita\n");
         printf("6. Ponto(s) Turístico(s)\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);

         
       break;

       case 4:
         printf("Você escolheu a opção PIB!\n\n");
         resultado1 = pib1 > pib2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("3. Densidade Populacional\n");
         printf("5. PIB per Capita\n");
         printf("6. Ponto(s) Turístico(s)\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);
       break;

       case 5:
         printf("Você escolheu a opção PIB Per Capita!\n\n");
         resultado1 = ppc1 > ppc2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("3. Densidade Populacional\n");
         printf("4. PIB\n");
         printf("6. Ponto(s) Turístico(s)\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);
       break;

       case 6:
         printf("Você escolheu a opção Ponto(s) Turístico(s)!\n\n");
         resultado1 = turismo1 > turismo2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("3. Densidade Populacional\n");
         printf("4. PIB\n");
         printf("5. PIB per Capita\n");
         printf("7. SuperPoder\n");
         scanf("%d", &atribmenu2);
       break;

       case 7:
         printf("Você escolheu a opção SuperPoder!\n\n");
         resultado1 = superpoder1 > superpoder2 ? 1 : 0;
         printf("Escolha o segundo atributo\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("3. Densidade Populacional\n");
         printf("4. PIB\n");
         printf("5. PIB per Capita\n");
         printf("6. Ponto(s) Turístico(s)\n");
         scanf("%d", &atribmenu2);
       break;
       
       default:
         printf("Opção Inválida!\n\n");  return 0;
       break;
       }
    
    switch (atribmenu2)
       {
       case 1:
         printf("Você escolheu a opção População!\n\n");
         resultado2 = populacao1 > populacao2 ? 1 : 0;
       break;

       case 2:
         printf("Você escolheu a opção Área!\n\n");
         resultado2 = area1 > area2 ? 1 : 0;
       break;

       case 3:
         printf("Você escolheu a opção Densidade Populacional!\n\n");
         resultado2 = densidade1 < densidade2 ? 1 : 0;
       break;

       case 4:
         printf("Você escolheu a opção PIB!\n\n");
         resultado2 = pib1 > pib2 ? 1 : 0;
       break;

       case 5:
         printf("Você escolheu a opção PIB Per Capita!\n\n");
         resultado2 = ppc1 > ppc2 ? 1 : 0;
       break;

       case 6:
         printf("Você escolheu a opção Ponto(s) Turístico(s)!\n\n");
         resultado2 = turismo1 > turismo2 ? 1 : 0;
       break;

       case 7:
         printf("Você escolheu a opção SuperPoder!\n\n");
         resultado2 = superpoder1 > superpoder2 ? 1 : 0;
       break;
       
       default:
         printf("Opção Inválida!\n");  return 0;
       break;
       }

    //Resultado das comparações
    if (resultado1 == 1){
      printf("A carta 1 venceu a comparação do primeiro atributo!\n");
    } else {
      printf("A carta 2 venceu a comparação do primeiro atributo!\n");
    }

    if (resultado2 == 1){
      printf("A carta 1 venceu a comparação do segundo atributo!\n\n");
    } else {
      printf("A carta 2 venceu a comparação do segundo atributo!\n\n");
    }

    //O nome dos dois países
    printf("Cidade da carta 1: %s\n", cidade1);
    printf("Cidade da carta 2: %s\n\n", cidade2);

    //Os dois atributos usados na comparação.
    if (atribmenu1 == 1){
      atributo1 = populacao1;
      atributo3 = populacao2;
      printf("População da Carta 1: %d habitantes\n", populacao1);
      printf("População da Carta 2: %d habitantes\n\n", populacao2);
    } else if (atribmenu1 == 2){
      atributo1 = area1;
      atributo3 = area2;
      printf("Área da Carta 1: %.2fkm²\n", area1);
      printf("Área da Carta 2: %.2fkm\n\n", area2);
    } else if (atribmenu1 == 3){
      atributo1 = inversoden1;
      atributo3 = inversoden2;
      printf("Densidade Populacional da Carta 1: %.2f hab/km² (Na soma é considerada o valor do inverso da densidade)\n", densidade1);
      printf("Densidade Populacional da Carta 2: %.2f hab/km² (Na soma é considerada o valor do inverso da densidade)\n\n", densidade2);
    } else if (atribmenu1 == 4){
      atributo1 = pib1;
      atributo3 = pib2;
      printf("PIB da Carta 1: R$ %.2f bilhões de reais\n", pib1);
      printf("PIB da Carta 2: R$ %.2f bilhões de reais\n\n", pib2);
    } else if (atribmenu1 == 5){
      atributo1 = ppc1;
      atributo3 = ppc2;
      printf("PIB per Capita da Carta 1: R$ %.2f reais\n", ppc1);
      printf("PIB per Capita da Carta 2: R$ %.2f reais\n\n", ppc2);
    } else if (atribmenu1 == 6){
      atributo1 = turismo1;
      atributo3 = turismo2;
      printf("Número de pontos turísticos da Carta 1: %i\n", turismo1);
      printf("Número de pontos turísticos da Carta 2: %i\n\n", turismo2);
    } else if (atribmenu1 == 7){
      atributo1 = superpoder1;
      atributo3 = superpoder2;
      printf("Valor do SuperPoder da Carta 1: %.3f\n", superpoder1);
      printf("Valor do SuperPoder da Carta 2: %.3f\n\n", superpoder2);
    } else {
      return 0;
    }

    if (atribmenu2 == 1){
      atributo2 = populacao1;
      atributo4 = populacao2;
      printf("População da Carta 1: %d habitantes\n", populacao1);
      printf("População da Carta 2: %d habitantes\n\n", populacao2);
    } else if (atribmenu2 == 2){
      atributo2 = area1;
      atributo4 = area2;
      printf("Área da Carta 1: %.2fkm² \n", area1);
      printf("Área da Carta 2: %.2fkm²\n\n", area2);
    } else if (atribmenu2 == 3){
      atributo2 = inversoden1;
      atributo4 = inversoden2;
      printf("Densidade Populacional da Carta 1: %.2f hab/km² (Na soma é considerada o valor do inverso da densidade)\n", densidade1);
      printf("Densidade Populacional da Carta 2: %.2f hab/km² (Na soma é considerada o valor do inverso da densidade)\n\n", densidade2);
    } else if (atribmenu2 == 4){
      atributo2 = pib1;
      atributo4 = pib2;
      printf("PIB da Carta 1: R$ %.0f bilhões de reais\n", pib1);
      printf("PIB da Carta 2: R$ %.0f bilhões de reais\n\n", pib2);
    } else if (atribmenu2 == 5){
      atributo2 = ppc1;
      atributo4 = ppc2;
      printf("PIB per Capita da Carta 1: R$ %.2f reais\n", ppc1);
      printf("PIB per Capita da Carta 2: R$ %.2f reais\n\n", ppc2);
    } else if (atribmenu2 == 6){
      atributo2 = turismo1;
      atributo4 = turismo2;
      printf("Número de pontos turísticos da Carta 1: %i\n", turismo1);
      printf("Número de pontos turísticos da Carta 2: %i\n\n", turismo2);
    } else if (atribmenu2 == 7){
      atributo2 = superpoder1;
      atributo4 = superpoder2;
      printf("Valor do SuperPoder da Carta 1: %.3f\n", superpoder1);
      printf("Valor do SuperPoder da Carta 2: %.3f\n\n", superpoder2);
    } else {
      return 0;
    }
  
    //Resultado da soma dos atributos para cada carta
    resultadosoma1 = (atributo1 + atributo2);
    resultadosoma2 = (atributo3 + atributo4);

    printf("A soma dos dois atributos da Carta 1: %.4f\n", resultadosoma1);
    printf("A soma dos dois atributos da Carta 2: %.4f\n\n", resultadosoma2);


    if (resultadosoma1 > resultadosoma2){
      printf("### A Carta 1 venceu! ###\n");
    } else if (resultadosoma1 == resultadosoma2){
      printf("### Empate! ###\n");
    } else {
      printf("### A Carta 2 venceu! ###\n");
    }
return 0;
}
