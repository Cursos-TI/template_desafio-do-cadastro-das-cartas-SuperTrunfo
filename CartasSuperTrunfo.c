#include <stdio.h>

int main(){

    char estado1, codigo1[10], nome1[20], estado2, codigo2[10], nome2[20];
    unsigned long int populacao1, populacao2;
    int turisticos1, turisticos2;
    float area1, pib1, area2, pib2, densidade1, densidade2, ppc1, ppc2;
    double poder1, poder2; 
    

    printf("\nBem vindo ao cadastro de cartas Super Trunfo de Estados Brasileiros!\n");
    printf("Vamos cadastrar a primeira carta. (para nomes com espaços, use _ no lugar do espaço) \n\n");

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite o estado da cidade: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado: ");
    scanf(" %s", codigo1);

    printf("Digite a populacao do estado: ");
    scanf(" %lu", &populacao1);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf(" %d", &turisticos1);
    
    printf("Digite a area do estado: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões do estado: ");
    scanf(" %f", &pib1);

    densidade1 = (float) populacao1 / area1;
    ppc1 = (float) (pib1 * 10e9) / (populacao1 * 10e3);
    poder1 = (float) populacao1 + area1 + pib1 + turisticos1 + pib1 - densidade1;

    printf("\nCadastro realizado com sucesso!\n");

    printf("\nCidade: %s\n", nome1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu000\n", populacao1);
    printf("Pontos turisticos: %d\n", turisticos1);
    printf("Area: %.2f km²\n", area1);
    printf("Densidade: %.2f habitantes por km²\n", densidade1);
    printf("PIB: R$ %.2f Bilhoes de Reais\n", pib1);
    printf("PIB per capita: R$ %.2f\n", ppc1);
    printf("Super Poder de Trunfo: %.2f\n", poder1);




    printf("\nAgora vamos cadastrar a segunda carta. (para nomes com espaços, use _ no lugar do espaço)\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite o estado da cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s", codigo2);

    printf("Digite a populacao do estado: ");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf("%d", &turisticos2);
    
    printf("Digite a area do estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões do estado: ");
    scanf("%f", &pib2);

    densidade2 = (float) populacao2 / area2;
    ppc2 = (float) (pib2 * 10e9) / (populacao2 * 10e3);
    poder2 = (float) populacao2 + area2 + pib2 + turisticos2 + pib2 - densidade2;

    printf("\nCadastro realizado com sucesso!\n");

    printf("\nCidade: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu000\n", populacao2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Area: %.2f km²\n", area2);
    printf("Densidade: %.2f habitantes por km²\n", densidade2);
    printf("PIB: R$ %.2f Bilhoes de Reais\n", pib2);
    printf("PIB per capita: R$ %.2f\n", ppc2);
    printf("Super Poder de Trunfo: %.2f\n", poder2);

    printf("\n Calculando o Super Trunfo...\n");
    printf("1 para verdadeiro ou 0 para falso:\n");

    printf("\nPopulação: Carta 1 vence:%d\n", populacao1 > populacao2);
    printf("Área: Carta 1 vence:%d\n", area1 > area2);
    printf("PIB: Carta 1 vence:%d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 vence:%d\n", turisticos1 > turisticos2);
    printf("Densidade: Carta 1 vence:%d\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 vence:%d\n", ppc1 > ppc2);
    printf("Poder de Super Trunfo: Carta 1 vence:%d\n", poder1 > poder2);

    return 0;
}
