#include <stdio.h>
    int main(){
        char estado, estado2;
        char codigo[4], codigo2[4];
        char nome[50], nome2[50];
        int pop, pop2;
        float area, area2;
        float pib, pib2;
        int pontos, pontos2;
           
        //ENTRADA CARTA 1

            printf("Digite o ESTADO 1: \n");
            scanf(" %c", &estado); 

            printf("Digite o CODIGO 1: \n");
            scanf("%s", &codigo);

            printf("Digite a CIDADE 1: \n");
            scanf(" %49[^\n]", nome);

            printf("Digite a POPULACAO 1: \n");
            scanf("%i", &pop);

            printf("Digite a AREA 1: \n");
            scanf("%f", &area);

            printf("Digite o PIB 1: \n");
            scanf("%f", &pib);

            printf("Digite os N PONTOS TURISTICOS 1: \n");
            scanf("%i", &pontos);
              

        //ENTRADA CARTA 2

            printf("Digite o ESTADO 2: \n");
            scanf(" %c", &estado2); 

            printf("Digite o CODIGO 2: \n");
            scanf("%s", &codigo2);

            printf("Digite a CIDADE 2: \n");
            scanf(" %49[^\n]", nome2);

            printf("Digite a POPULACAO 2: \n");
            scanf("%i", &pop2);

            printf("Digite a AREA 2: \n");
            scanf("%f", &area2);

            printf("Digite o PIB 2: \n");
            scanf("%f", &pib2);

            printf("Digite os N PONTOS TURISTICOS 1: \n");
            scanf("%i", &pontos2);
printf(" \n");
printf(" \n");
          
            printf("****Veja as cartas a seguir****\n");
            
printf(" \n");
printf(" \n");
              //SAÍDA CARTA 1
              
                printf("***CARTA 1***\n");
                printf(" \n");
                printf("ESTADO: %c\n", estado);
                printf("CODIGO: %s\n", codigo);
                printf("CIDADE: %s\n", nome);
                printf("POPULACAO: %i\n", pop);
                printf("AREA: %f\n", area);
                printf("PIB: %f\n", pib);
                printf("NUMERO DE PONTOS TURISTICOS: %i\n", pontos);
printf(" \n");
printf(" \n");
            
            //SAÍDA CARTA 2

                printf("***CARTA 2\n***");
                printf(" \n");
                printf("ESTADO: %c\n", estado2);
                printf("CODIGO: %s\n", codigo2);
                printf("CIDADE: %s\n", nome2);
                printf("POPULACAO: %i\n", pop2);
                printf("AREA: %f\n", area2);
                printf("PIB: %f\n", pib2);
                printf("NUMERO DE PONTOS TURISTICOS: %i\n", pontos2);

                return 0;}
