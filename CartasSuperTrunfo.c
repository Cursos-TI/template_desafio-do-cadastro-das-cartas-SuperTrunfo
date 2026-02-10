#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main() {
    // Declaração das variáveis para a carta 1
    char estado[45];
    char codigo_carta[45];
    char nome_cidade[45];
    long int populaçao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;

    // Declaração das variáveis para a carta 2
    char estado_2[45];
    char codigo_carta_2[45];
    char nome_cidade_2[45];
    long int populaçao_2;
    float area_2;
    float PIB_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float PIB_per_capita_2;

    // Área para entrada de dados
    // Área para definição das variáveis para armazenar as propriedades das cidades

    printf("Digite os dados da carta 01:\n");

    printf("Estado (2 letras): \n");
    scanf(" %s", estado);

    printf("Código da carta (2 letras): \n");
    scanf(" %s", codigo_carta);

    printf("Nome da cidade: \n");
    scanf(" %s", nome_cidade);

    printf("População: \n");
    scanf("%ld",&populaçao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf(" %f", &PIB);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Coletando os dados da carta 2
    printf("Digite os dados da carta 02:\n");

    printf("Estado 2 (2 letras): ");
    scanf(" %s", estado_2);

    printf("Código da carta 2 (2 letras):\n");
    scanf(" %s", codigo_carta_2);

    printf("Nome da cidade 2: \n");
    scanf(" %s", nome_cidade_2);

    printf("População 2: \n");
    scanf("%ld", &populaçao_2);

    printf("Área 2: \n");
    scanf("%f", &area_2);

    printf("PIB 2:\n ");
    scanf(" %f", &PIB_2);

    printf("Pontos turísticos 2: ");
    scanf("%d", &pontos_turisticos_2);

    // Área para exibição dos dados da cidade

    // Exibindo os dados coletados da carta_1
    printf("\nDados da carta:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %ld\n", populaçao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    // Densidade e PIB
    densidade_populacional = (float) populaçao / area;
    PIB_per_capita = (float) PIB / populaçao;
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", PIB_per_capita);



    // Exibindo os dados coletados da carta_2
    printf("\nDados da carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código da carta: %s\n", codigo_carta_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %ld\n", populaçao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    // Densidade e PIB
    densidade_populacional_2 = (float) populaçao_2 / area_2;
    PIB_per_capita_2 = (float) PIB_2 / populaçao_2;
    printf("Densidade populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per capita: %.2f\n", PIB_per_capita_2);

    // Comparando todos os atributos das cartas

    printf("\nComparação entre as cartas:\n");
    
    if(populaçao > populaçao_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}

    if(area > area_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}
    
    if(PIB > PIB_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}

    if(pontos_turisticos > pontos_turisticos_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}
    
    if(densidade_populacional < densidade_populacional_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}

    if(PIB_per_capita > PIB_per_capita_2) {
        printf("Carta 1 Venceu\n");
        } else {printf("Carta 2 Venceu\n");}

    return 0;
}
