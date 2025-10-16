#include <stdio.h>

// Programa para cadastrar e exibir informações de cartas de super trunfo
// Cada carta representa uma cidade com atributos como estado, código, nome, população, área, PIB e pontos turísticos
// O programa lê os dados de duas cartas e exibe as informações cadastradas

int main()
{   
    
    //Carta 1
    char estado[20];;
    char cod_da_carta[4];
    char nomeCidade[49];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade_populacional;
    float pib_per_capita;
    
    //Carta 2
    char estado2[20];
    char cod_da_carta2[4];
    char nomeCidade2[49];
    int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade_populacional2;
    float pib_per_capita2;

    //Entrada de dados da carta 1

    printf("Digite o estado da cidade (sigla): ");
    scanf("%s", estado);

    printf("Digite o codigo da carta (3 caracteres): ");
    scanf("%s", cod_da_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade);  

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    
    //Cálculo dos atributos derivados da carta 2

    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    //Saida de dados da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", cod_da_carta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    //Saida de dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Digite o estado da cidade (sigla): ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta (3 caracteres): ");
    scanf("%s", cod_da_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);  
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em R$): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);    
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2 = populacao2 / area2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    // Comparação entre as cartas
    
    printf("\n--- Comparação entre as Cartas ---\n");
    printf("População: Carta 1 vence \n", populacao > populacao2);
    printf("Área: Carta 1 vence (%.2f km²)\n", area > area2);
    printf("PIB: Carta 1 vence R$ (%.2f)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 vence (%d)\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 vence (%.2f) hab/km²\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: Carta 2 vence R$ (%.2f)\n", pib_per_capita < pib_per_capita2);

    printf("-------------Comparação de Cartas (Atributo Area)-------------\n");

    printf("Carta 1 - %s : %.2f\n", nomeCidade, area);
    printf("Carta 2 - %s : %.2f\n", nomeCidade2, area2);
    
    if (area > area2) {
        printf("Resultado: Carta 1 %s vence!\n", nomeCidade);
    } else if (area < area2) {
        printf("Resultado: Carta 2 %s vence!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}

