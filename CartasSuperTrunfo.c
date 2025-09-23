#include <stdio.h>

int main() {
 //Elaboração de cartas para Super Trunfo
 //Dados coletados via teclado
    
    char estado[20];
    char codigo[5];
    char cidade[15];
    char populacao[10];
    char area[10];
    float PIB;
    int pontos_turisticos;
    printf("--DADOS CARTA 01--\n");
    printf("Digite o Estado: ");
    scanf ("%s", estado);
        printf("Digite a Cidade: ");
    scanf("%s", cidade);
        printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigo);
        printf("Digite a Populacao: ");

    scanf("%s", populacao);
        printf("Digite a area em Km: ");

    scanf("%s", area);
        printf("Digite o PIB: ");

    scanf("%f", &PIB);
        printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
        printf("---------CARTA 1---------\n");  
        printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %s\nArea km: %s\nPIB: R$%.2f\nPontos Turisticos: %d\n",estado, codigo, cidade, populacao, area, PIB, pontos_turisticos);
        printf("#########################\n");
        //Nesse ponto são separados os dados da carta 1 e carta 2   

    printf("--DADOS CARTA 02--\n");
        printf("Digite o Estado: ");
    scanf ("%s", estado);
        printf("Digite a Cidade: ");
    scanf("%s", cidade);
        printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigo);
        printf("Digite a Populacao: ");
    scanf("%s", populacao);
        printf("Digite a area em Km: ");
    scanf("%s", area);
        printf("Digite o PIB: ");
    scanf("%f", &PIB);
        printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
        
        //Separação entre carta 1 e 1

        printf("---------CARTA 2---------\n");  
        printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %s\nArea km: %s\nPIB: R$%.2f\nPontos Turisticos: %d\n",estado, codigo, cidade, populacao, area, PIB, pontos_turisticos);
        printf("#########################\n");    
    
return 0;
} 
