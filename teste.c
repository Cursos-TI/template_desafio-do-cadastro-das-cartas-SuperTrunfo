#include <stdio.h> 
    int main (){
        int populacao, turistico;
        float km, pib;
        char estado[3], cidade[50], numero [5];

        printf("SUPER TRUNFO - CIDADES\n\n");

        printf("nome da cidade 1 (sem espaço): ");
        scanf(" %s", cidade);

        printf("sigla estado: ");
        scanf("%s", estado);

        printf("numero da carta: ");
        scanf("%s", numero);

        printf("população: ");
        scanf("%d", &populacao);

        printf("area total: ");
        scanf("%f", &km);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("numero de pontos turisticos: ");
        scanf ("%d", &turistico);

        printf("\nnome da cidade 1 (sem espaço): %s\n", cidade);
        printf("sigla do estado: %s\n", estado);
        printf("codigo da carta: %s\n", numero);
        printf("população: %d\n", populacao);
        printf("area total %.3f km²\n", km);
        printf("PIB: %.2f\n", pib);
        printf("numero de pontos turisticos: %d\n\n", turistico);

            printf("nome da cidade 2 (sem espaço): ");
        scanf(" %s", cidade);

        printf("sigla estado: ");
        scanf("%s", estado);

        printf("numero da carta: ");
        scanf("%s", numero);

        printf("população: ");
        scanf("%d", &populacao);

        printf("area total: ");
        scanf("%f", &km);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("numero de pontos turisticos: ");
        scanf ("%d", &turistico);

        printf("\nnome da cidade 2 (sem espaço): %s\n", cidade);
        printf("sigla do estado: %s\n", estado);
        printf("codigo da carta: %s\n", numero);
        printf("população: %d\n", populacao);
        printf("area total %.3f km²\n", km);
        printf("PIB: %.2f\n", pib);
        printf("numero de pontos turisticos: %d\n\n", turistico);




        return 0;
    }