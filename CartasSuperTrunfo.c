#include <stdio.h>

int main() {
    //Titulo/Assinatura
    printf("Super Trunfo\n");
    printf("Objetivo, tenha a carta mais forte.\n");
    printf("Ass: André Ribeiro\n");

    //Primeira carta
    char Estado[20], Codigo[4], Cidade[20];
    int Populacao, pontos_turisticos;
    float metros, PIB;

    //segunda carta
    char Estado1[28], Codigo1[4], Cidade1[20];
    int Populacao1, pontos_turisticos1;
    float metros1, PIB1;

    //Informaçao Primeira carta 
    printf("Primeira Carta\n");

    printf("Digite o Estado(A-H): \n");
    scanf("%s", Estado);

    printf("Digite o codigo da carta(ex: A01): ");
    scanf("%s", Codigo);

    printf("Digite a cidade: ");
    scanf("%s", Cidade);
    
    printf("Digite a populacao: ");
    scanf("%d", &Populacao);

    printf("Digite os Kms: ");
    scanf("%f", &metros);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    //Informaçao segunda carta
    printf("Segunda Carta\n");

    printf("Digite o Estado(A-H): \n");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta(ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade1);
    
    printf("Digite a populacao: ");
    scanf("%d", &Populacao1);

    printf("Digite os Area: ");
    scanf("%f", &metros1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Informaçoes no terminal sobre a primeira carta
    printf("Carta 01\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", metros);
    printf("Pib: %.3f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);

    //Informaçoes no terminal sobre a segunda carta
    printf("Carta 02\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", metros1);
    printf("Pib: %.3f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    return 0;
}


  