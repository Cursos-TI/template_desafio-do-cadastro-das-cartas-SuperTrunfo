#include <stdio.h>
#include <string.h>

int main() {

    // Carta 1
    char pais1[50] = "brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2174.0;
    int pontosTuristicos1 = 25;
    float densidade1 = 25.13;

    // Carta 2
    char pais2[50] = "argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontosTuristicos2 = 18;
    float densidade2 = 16.54;

    int opcao;

    printf("\n=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparaccao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n%s x %s\n\n", pais1, pais2);

    switch(opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if(populacao1 > populacao2)
               printf("\nVencedor: %s\n", pais1);
            else if(populacao2 > populacao1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if(area1 > area2)
               printf("\nVencedor: %s\n", pais1);
            else if(area2 > area1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");
            break;
            
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if(pib1 > pib2)
               printf("\nVencedor: %s\n", pais1);
            else if(pib2 > pib1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");
            break;
            
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2)
               printf("\nVencedor: %s\n", pais1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            if(densidade1 > densidade2)
               printf("\nVencedor: %s\n", pais1);
            else if(densidade2 > densidade1)
                printf("\nVencedor: %s\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        default:
           printf("\nOpcao invalida!\n");

    }
    return 0;
}