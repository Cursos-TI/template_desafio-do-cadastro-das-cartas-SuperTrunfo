#include <stdio.h>

/*
    Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações: Estado, código da carta, nome da cidade, população, área, pib, número de pontos turísticos

    Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

    Carta 1:

    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30
*/

int main()
{
    char state, state2;
    char state3;
    char cardCode[4], cardCode2[4], city[50], city2[50];
    int places, places2, population, population2;
    float area, area2, pib, pib2, populationDensity, pibPerCapita, populationDensity2, pibPerCapita2;

    printf("Seja bem vindo ao super trunfo! \n");
 
    //Cadastro da primeira carta
    printf("Digite uma letra de A a H: ");
    scanf("%c", &state);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cardCode);

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o número de habitantes: ");
    scanf("%d", &population);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf("%d", &places);
    printf("\n");

    populationDensity = population / area;
    pibPerCapita = (pib * 1000000000) / population;

    // Exibição da primeira carta
    printf("Estado: %c\n", state);
    printf("Código: %s\n", cardCode);
    printf("Nome da cidade: %s\n", city);
    printf("População: %d\n", population);
    printf("Área: %fKm²\n ", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", places);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity);
    printf("Pib per capita: %.2f reais\n", pibPerCapita);

    printf("\n");

    printf("Vamos para a segunda carta\n");

    //Cadastro da segunda carta
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &state2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", cardCode2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", city2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &population2);

    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf(" %d", &places2);
    printf("\n");

    populationDensity2 = population2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / population2;

    // Exibição da segunda carta

    printf("Segunda carta: \n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", cardCode2);
    printf("Nome da cidade: %s\n", city2);
    printf("População: %d\n", population2);
    printf("Área: %fKm²\n ", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", places2);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity2);
    printf("Pib per capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

