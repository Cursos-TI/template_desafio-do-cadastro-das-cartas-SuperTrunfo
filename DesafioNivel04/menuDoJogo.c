#include <stdio.h>


int main() {
    // CARTA 1
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // CARTA 2
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao;

       printf("=== CADASTRO DA CARTA 1 ===\n");

       printf("Digite o nome do pais: ");
       scanf("%s", pais1);

       printf("Digite a populacao: ");
       scanf("%d", &populacao1);

       printf("Digite a area do pais: ");
       scanf("%f", &area1);

       printf("Digite o PIB: ");
       scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

   printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o nome do pais: ");
    scanf("%s", pais2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area do pais: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

     printf("\n===== SUPER TRUNFO =====\n");

    printf("Escolha um atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

switch(opcao) {

        case 1:

            printf("\n=== COMPARACAO POR POPULACAO ===\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if(populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);

            } else if(populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);

            } else {
                printf("Empate!\n");
            }

            break;

        case 2:

            printf("\n=== COMPARACAO POR AREA ===\n");

            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if(area1 > area2) {
                printf("Vencedor: %s\n", pais1);

            } else if(area2 > area1) {
                printf("Vencedor: %s\n", pais2);

            } else {
                printf("Empate!\n");
            }

            break;

        case 3:

            printf("\n=== COMPARACAO POR PIB ===\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if(pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);

            } else if(pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);

            } else {
                printf("Empate!\n");
            }

            break;

        case 4:

            printf("\n=== COMPARACAO POR PONTOS TURISTICOS ===\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);

            } else if(pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);

            } else {
                printf("Empate!\n");
            }

            break;

        case 5:

            printf("\n=== COMPARACAO POR DENSIDADE DEMOGRAFICA ===\n");

            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            // MENOR densidade vence
            if(densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);

            } else if(densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);

            } else {
                printf("Empate!\n");
            }

            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;

}