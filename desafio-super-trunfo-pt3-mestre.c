#include <stdio.h>

/*
    Parte 3 do desafio super trunfo

    Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

    Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

    Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

    Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).


    Exemplo de Saída (após a entrada dos dados):

    Comparação de Cartas:

    População: Carta 1 venceu (1)

    Área: Carta 1 venceu (1)

    PIB: Carta 1 venceu (1)

    Pontos Turísticos: Carta 1 venceu (1)

    Densidade Populacional: Carta 2 venceu (0)

    PIB per Capita: Carta 1 venceu (1)

    Super Poder: Carta 1 venceu (1)
*/

int main()
{
    char state, state2;
    char state3;
    char cardCode[4], cardCode2[4], city[50], city2[50];
    int places, places2, populationBattle, areaBattle, pibBattle, placesBattle, populationDensityBattle, pibPerCapitaBattle, powerBattle;
    unsigned long int population, population2;
    float area, area2, pib, pib2, populationDensity, pibPerCapita, populationDensity2, pibPerCapita2, superPower, superPower2;

    printf("Seja bem vindo ao super trunfo! \n");

    // Cadastro da primeira carta
    printf("Digite uma letra de A a H: ");
    scanf("%c", &state);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cardCode);

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &population);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf("%d", &places);
    printf("\n");

    populationDensity = population / area;
    pibPerCapita = (pib * 1000000000) / population;
    superPower = population + area + pib + places + populationDensity;

    // Exibição da primeira carta
    printf("Estado: %c\n", state);
    printf("Código: %s\n", cardCode);
    printf("Nome da cidade: %s\n", city);
    printf("População: %lu\n", population);
    printf("Área: %.2fKm²\n ", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", places);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity);
    printf("Pib per capita: %.2f reais\n", pibPerCapita);
    printf("Poder total carta 1: %.2f\n", superPower);

    printf("\n");
    printf("Vamos para a segunda carta\n");
    printf("\n");

    // Cadastro da segunda carta
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &state2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", cardCode2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", city2);

    printf("Digite o número de habitantes: ");
    scanf(" %lu", &population2);

    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf(" %d", &places2);
    printf("\n");

    populationDensity2 = population2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / population2;
    superPower2 = population2 + area2 + pib2 + places2 + populationDensity2;

    // Exibição da segunda carta

    printf("Segunda carta: \n");
    printf("\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", cardCode2);
    printf("Nome da cidade: %s\n", city2);
    printf("População: %lu\n", population2);
    printf("Área: %.2fKm²\n ", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", places2);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity2);
    printf("Pib per capita: %.2f reais\n", pibPerCapita2);
    printf("Poder total carta 2: %.2f\n", superPower2);

    printf("\n");
    printf("Comparações entre as cartas \n");
    printf("\n");

    // Comparações entre as cartas
    populationBattle = population > population2;
    areaBattle = area > area2;
    pibBattle = pib > pib2;
    placesBattle = places > places2;
    populationDensityBattle = populationDensity < populationDensity2;
    pibPerCapitaBattle = pibPerCapita > pibPerCapita2;
    powerBattle = superPower > superPower2;

    // Exibição das comparações entre os atributos

    /* População */
    printf("População total da carta 1: %lu\n", population);
    printf("População total da carta 2: %lu\n", population2);
    printf("Carta 1 venceu: %d\n", populationBattle);
    printf("\n");

    /* Área */
    printf("Área total da carta 1: %f\n", area);
    printf("Área total da carta 2: %f\n", area2);
    printf("Carta 1 venceu: %d\n", areaBattle);
    printf("\n");

    /* Pib */
    printf("Pib total da carta 1: %f\n", pib);
    printf("Pib total da carta 2: %f\n", pib2);
    printf("Carta 1 venceu: %d\n", pibBattle);
    printf("\n");

    /* Pontos turísticos */
    printf("Total de pontos turísticos da carta 1: %d\n", places);
    printf("Total de pontos turísticos da carta 2: %d\n", places2);
    printf("Carta 1 venceu: %d\n", placesBattle);
    printf("\n");

    /* Densidade populacional */
    printf("Densidade populacional da carta 1: %f\n", populationDensity);
    printf("Densidade populacional da carta 2: %f\n", populationDensity2);
    printf("Carta 1 venceu: %d\n", populationDensityBattle);
    printf("\n");

    /* Pib Per capita */
    printf("Pib per capita da carta 1: %f\n", pibPerCapita);
    printf("Pib per capita da carta 2: %f\n", pibPerCapita2);
    printf("Carta 1 venceu: %d\n", pibPerCapitaBattle);
    printf("\n");

    /* Poder total */
    printf("Poder total da carta 1: %f\n", superPower);
    printf("Poder total da carta 2: %f\n", superPower2);
    printf("Carta 1 venceu: %d\n", powerBattle);
    printf("\n");

    return 0;
}
