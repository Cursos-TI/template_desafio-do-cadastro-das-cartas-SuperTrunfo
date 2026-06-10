#include <stdio.h>

int main() {

    // Carta 1 - Brasil
    char pais1[] = "Brasil";
    int populacao1 = 214;
    float area1 = 8515.7;
    float pib1 = 2174.0;
    int pontosTuristicos1 = 25.1;
    float densidade1 = 15.1;

    // Carta 2 - Argentina
    char pais2[] = "Argentina";
    int populacao2 = 46;
    float area2 = 2780.4;
    float pib2 = 633.0;
    int pontosTuristicos2 = 18;
    float densidade2 = 16.5;

    int atributo1, atributo2;

    printf("==== SUPER TRUNFO ====\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - PontosTuristicos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1)
        printf("1 - Populacao\n");

    if (atributo1 != 2)
        printf("2 - Area\n");

    if (atributo1 != 3)
        printf("3 - PIB\n");

    if (atributo1 != 4)
        printf("4 - Pontos Turisticos\n");

    if (atributo1 != 5)
        printf("5 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: voce nao pode escolher o memso atributo duas vezes!\n");
        return 0;
    }

    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    char nomeAtributo1[30];
    char nomeAtributo2[30];

    // Primeiro atributo
    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            sprintf(nomeAtributo1, "Populacao");
            break;
        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            sprintf(nomeAtributo1, "Area");
            break;
        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo1, "Pontos Turisticos");
            break;
        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Segundo atributo
    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            sprintf(nomeAtributo2, "Populacao");
            break;
        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            sprintf(nomeAtributo2, "Area");
            break;
        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            sprintf(nomeAtributo2, "Pontos Turisticos");
            break;
        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    float soma1 = 0;
    float soma2 = 0;
    
    // Promeiro atributo
    if (atributo1 == 5) {
        soma1 += (1 / valor1Carta1);
        soma2 += (1 / valor1Carta2);
    } else {
        soma1 += valor1Carta1;
        soma2 += valor1Carta2;
    }

    // Segundo atributo
    if (atributo2 == 5) {
        soma1 += (1 / valor2Carta1);
        soma2 += (1 / valor2Carta2);
    } else {
        soma1 += valor2Carta1;
        soma2 += valor2Carta2;
    }

    printf("\n===== RESULTADO =====\n\n");

    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n\n", pais2);

    printf("%s\n", nomeAtributo1);
    printf("%s %.2f\n", pais1, valor1Carta1);
    printf("%s: %.2f\n\n", pais2, valor2Carta2);

    printf("%s\n", nomeAtributo2);
    printf("%s: %.2f\n", pais1, valor2Carta1);
    printf("%s: %.2f\n\n", pais2, valor2Carta2);

    printf("Soma %s: %.2f\n", pais1, soma1);
    printf("Soma %s: %.2f\n\n", pais2, soma2);

    printf("Vencedor: %s\n",
           (soma1 > soma2) ? pais1 :
           (soma2 > soma1) ? pais2 :
           "Empate");

    return 0;
}
    