#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapita2;

    // Variáveis do menu e comparação
    int escolhadeatributo;
    float valorCarta1, valorCarta2;
    int cartaVencedora = 0;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;


    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;


    // Exibição da Carta 1
    printf("\n--- Carta 1 Cadastrada ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);


    // Exibição da Carta 2
    printf("\n--- Carta 2 Cadastrada ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);


    // Menu interativo
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhadeatributo);


    // Switch para escolher o atributo
    switch (escolhadeatributo) {
        case 1:
            valorCarta1 = populacao1;
            valorCarta2 = populacao2;
            break;

        case 2:
            valorCarta1 = area1;
            valorCarta2 = area2;
            break;

        case 3:
            valorCarta1 = pib1;
            valorCarta2 = pib2;
            break;

        case 4:
            valorCarta1 = pontosTuristicos1;
            valorCarta2 = pontosTuristicos2;
            break;

        case 5:
            valorCarta1 = densidadepopulacional1;
            valorCarta2 = densidadepopulacional2;
            break;

        default:
            printf("\nOpção inválida! Escolha uma opção de 1 a 5.\n");
            return 0;
    }


    // Comparação usando if-else aninhado
    if (escolhadeatributo == 5) {

        // Na densidade demográfica, vence o MENOR valor
        if (valorCarta1 < valorCarta2) {
            cartaVencedora = 1;
        } else {
            if (valorCarta2 < valorCarta1) {
                cartaVencedora = 2;
            } else {
                cartaVencedora = 0;
            }
        }

    } else {

        // Nos outros atributos, vence o MAIOR valor
        if (valorCarta1 > valorCarta2) {
            cartaVencedora = 1;
        } else {
            if (valorCarta2 > valorCarta1) {
                cartaVencedora = 2;
            } else {
                cartaVencedora = 0;
            }
        }
    }


    // Exibição do resultado
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    printf("Atributo escolhido: ");

    switch (escolhadeatributo) {
        case 1:
            printf("População\n");
            break;

        case 2:
            printf("Área\n");
            break;

        case 3:
            printf("PIB\n");
            break;

        case 4:
            printf("Número de Pontos Turísticos\n");
            break;

        case 5:
            printf("Densidade Demográfica\n");
            break;
    }

    printf("Valor da Carta 1: %.2f\n", valorCarta1);
    printf("Valor da Carta 2: %.2f\n", valorCarta2);

    if (cartaVencedora == 1) {
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        if (cartaVencedora == 2) {
            printf("Resultado: Carta 2 venceu!\n");
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}