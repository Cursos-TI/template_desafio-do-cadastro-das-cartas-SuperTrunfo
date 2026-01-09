#include <stdio.h>

int main(){
    char Estado;
    char CodCarta[4];
    char NomeCidade[50];
    int Populacao;
    float area;
    float PIB;
    int PontosTuristicos;
    
    char Estado2;
    char CodCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float area2;
    float PIB2;
    int PontosTuristicos2;

    
    printf("Carta 1\n");

    printf("Digite o Estado:");
    scanf(" %c", &Estado);
    
    printf("Digite o código da carta:");
    scanf(" %s", CodCarta);
    
    printf("Digite o nome da cidade:");
    getchar();
    fgets(NomeCidade,50,stdin);
    
    printf("Digite a população da cidade:");
    scanf(" %d", &Populacao);
    
    printf("Digite a área(em km²): ");
    scanf(" %f", &area);
    
    printf("Digite o PIB: ");
    scanf(" %f", &PIB);
    
    printf("Digite a quantidade de pontos Turisticos: ");
    scanf(" %d", &PontosTuristicos);
    
    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado);
    printf("Código: %c%s \n", Estado, CodCarta);
    printf("Nome da cidade: %s", NomeCidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Numero de Pontos Turisticos: %d \n", PontosTuristicos);


    printf("Carta 2 \n");
    
    printf("Digite o Estado:");
    scanf(" %c", &Estado2);
    
    printf("Digite o código da carta:");
    scanf(" %s", CodCarta2);
    
    printf("Digite o nome da cidade:");
    getchar();
    fgets(NomeCidade2,50,stdin);
    
    printf("Digite a população da cidade:");
    scanf(" %d", &Populacao2);
    
    printf("Digite a área(em km²): ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);
    
    printf("Digite a quantidade de pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);
    
    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %c%s\n", Estado2, CodCarta2);
    printf("Nome da cidade: %s", NomeCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", PontosTuristicos2);

}
