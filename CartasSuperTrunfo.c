#include <stdio.h>
#include <string.h>

// Função auxiliar para comparar atributos e determinar vencedor
void compararCartas(
    char atributo1[10], char atributo2[10],
    unsigned long int populacao1, unsigned long int populacao2,
    float area1, float area2, float pib1, float pib2,
    int pontosTuristicos1, int pontosTuristicos2
) {
    float total1 = 0, total2 = 0;

    if (strcmp(atributo1, "po") == 0 && strcmp(atributo2, "ar") == 0) {
        printf("\nComparando população e área...\n");

        printf("População: Carta 1 = %lu | Carta 2 = %lu\n", populacao1, populacao2);
        printf("Área: Carta 1 = %.2f | Carta 2 = %.2f\n", area1, area2);

        total1 = (float)populacao1 + area1;
        total2 = (float)populacao2 + area2;
    } 
    else if (strcmp(atributo1, "po") == 0 && strcmp(atributo2, "pi") == 0) {
        printf("\nComparando população e PIB...\n");

        printf("População: Carta 1 = %lu | Carta 2 = %lu\n", populacao1, populacao2);
        printf("PIB: Carta 1 = %.2f | Carta 2 = %.2f\n", pib1, pib2);

        total1 = (float)populacao1 + pib1;
        total2 = (float)populacao2 + pib2;
    }
    else if (strcmp(atributo1, "po") == 0 && strcmp(atributo2, "tu") == 0) {
        printf("\nComparando população e pontos turísticos...\n");

        printf("População: Carta 1 = %lu | Carta 2 = %lu\n", populacao1, populacao2);
        printf("Pontos turísticos: Carta 1 = %d | Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);

        total1 = (float)populacao1 + pontosTuristicos1;
        total2 = (float)populacao2 + pontosTuristicos2;
    }
    else if (strcmp(atributo1, "ar") == 0 && strcmp(atributo2, "pi") == 0) {
        printf("\nComparando área e PIB...\n");

        printf("Área: Carta 1 = %.2f | Carta 2 = %.2f\n", area1, area2);
        printf("PIB: Carta 1 = %.2f | Carta 2 = %.2f\n", pib1, pib2);

        total1 = area1 + pib1;
        total2 = area2 + pib2;
    }
    else if (strcmp(atributo1, "tu") == 0 && strcmp(atributo2, "ar") == 0) {
        printf("\nComparando pontos turísticos e área...\n");

        printf("Pontos turísticos: Carta 1 = %d | Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
        printf("Área: Carta 1 = %.2f | Carta 2 = %.2f\n", area1, area2);

        total1 = pontosTuristicos1 + area1;
        total2 = pontosTuristicos2 + area2;
    }
    else if (strcmp(atributo1, "tu") == 0 && strcmp(atributo2, "pi") == 0) {
        printf("\nComparando pontos turísticos e PIB...\n");

        printf("Pontos turísticos: Carta 1 = %d | Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
        printf("PIB: Carta 1 = %.2f | Carta 2 = %.2f\n", pib1, pib2);

        total1 = pontosTuristicos1 + pib1;
        total2 = pontosTuristicos2 + pib2;
    } else {
        printf("\n⚠️ Opção inválida de atributos.\n");
        return;
    }

    // Resultado final
    printf("\nTotal Carta 1: %.2f\nTotal Carta 2: %.2f\n", total1, total2);

    if (total1 > total2)
        printf("\n🏆 Carta 1 venceu!\n");
    else if (total1 < total2)
        printf("\n🏆 Carta 2 venceu!\n");
    else
        printf("\n🤝 Empate!\n");
}

int main() {
    // Variáveis da carta 1
    char estado, codigoCarta[4], cidade[50];
    unsigned long int populacao;
    float area, pib;
    int pontosTuristicos;
    float densidadePop, pibPerCapita;

    // Variáveis da carta 2
    char estado2, codigoCarta2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePop2, pibPerCapita2;

    // Atributos escolhidos
    char atributo1[10], atributo2[10];

    // Menu
    int opcao;

    printf("===== SUPER TRUNFO CIDADES =====\n");

    // Coleta Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Digite uma letra entre A e H: ");
    scanf(" %c", &estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);
    printf("Digite a população: ");
    scanf("%lu", &populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Calcula derivados
    densidadePop = populacao / area;
    pibPerCapita = (pib * 1000000000) / populacao;

    // Coleta Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Digite uma letra entre A e H: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Jogar\n");
        printf("2 - Mostrar dados das cartas\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nEscolha os atributos das cartas:\n");
                printf("po = população | ar = área | pi = PIB | tu = pontos turísticos\n");
                printf("Atributo 1: ");
                scanf("%s", atributo1);
                printf("Atributo 2: ");
                scanf("%s", atributo2);

                compararCartas(
                    atributo1, atributo2,
                    populacao, populacao2,
                    area, area2, pib, pib2,
                    pontosTuristicos, pontosTuristicos2
                );
                break;

            case 2:
                printf("\n=== Carta 1 ===\n");
                printf("Estado: %c\n", estado);
                printf("Código: %s\n", codigoCarta);
                printf("Cidade: %s\n", cidade);
                printf("População: %lu\n", populacao);
                printf("Área: %.2f km²\n", area);
                printf("PIB: %.2f bilhões\n", pib);
                printf("Pontos turísticos: %d\n", pontosTuristicos);
                printf("Densidade Populacional: %.2f hab/km²\n", densidadePop);
                printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

                printf("\n=== Carta 2 ===\n");
                printf("Estado: %c\n", estado2);
                printf("Código: %s\n", codigoCarta2);
                printf("Cidade: %s\n", cidade2);
                printf("População: %lu\n", populacao2);
                printf("Área: %.2f km²\n", area2);
                printf("PIB: %.2f bilhões\n", pib2);
                printf("Pontos turísticos: %d\n", pontosTuristicos2);
                printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
                printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
                break;

            case 3:
                printf("\nSaindo do jogo...\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
