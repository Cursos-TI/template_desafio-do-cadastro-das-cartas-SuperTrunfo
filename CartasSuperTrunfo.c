// Jogo de Cartas: SUPER TRUNFO
// NÍVEL BÁSICO

#include <stdio.h>

int main() {

    // CARTA UM
    char estadoUm[10];
    char codigoCartaUm[3];
    char nomeCidadeUm[50];
    int populacaoUm;
    float areaUm;
    float pibUm;
    int ptsTuristicosUm;

    // CARTA DOIS
    char estado2[10];
    char codigoCarta2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ptsTuristicos2;

    printf("PRIMEIRA RODADA - CARTA UM");

    printf("\nEstado: ");
    scanf("%s", &estadoUm);

    printf("\nCódigo da carta: ");
    scanf("%s", &codigoCartaUm);

    printf("\nNome da cidade: ");
    scanf("%s", &nomeCidadeUm);

    printf("\nPopulação: ");
    scanf("%d", &populacaoUm);

    printf("\nÁrea em KM: ");
    scanf("%f", &areaUm);

    printf("\nPib: ");
    scanf("%f", &pibUm);

    printf("\nPontos Turisticos: ");
    scanf("%d", &ptsTuristicosUm);

    printf("\n\nSEGUNDA RODADA - CARTA DOIS");

    printf("\nEstado: ");
    scanf("%s", &estado2);

    printf("\nCódigo da carta: ");
    scanf("%s", &codigoCarta2);

    printf("\nNome da cidade: ");
    scanf("%s", &nomeCidade2);

    printf("\nPopulação: ");
    scanf("%d", &populacao2);

    printf("\nÁrea em KM: ");
    scanf("%f", &area2);

    printf("\nPib: ");
    scanf("%f", &pib2);

    printf("\nPontos Turisticos: ");
    scanf("%d", &ptsTuristicos2);

    printf("\nCARTAS NA MESA!");
    
    printf("\nCARTA UM\nEstado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea em KM: %f\nPIB: %f\nPontos Turísticos: %d\n", estadoUm, codigoCartaUm, nomeCidadeUm, populacaoUm, areaUm, pibUm, ptsTuristicosUm);

    printf("\nCARTA DOIS\nEstado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea em KM: %f\nPIB: %f\nPontos Turísticos: %d\n", estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, ptsTuristicos2);

    return 0;
}
