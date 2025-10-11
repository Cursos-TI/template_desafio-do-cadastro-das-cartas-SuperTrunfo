#include <stdio.h>

int main() {

    // Estrutura das cartas
    char estado1[] = "SP";
    char codigo1[] = "C01";
    char nome1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 763000000000.0;
    int pontos1 = 45;

    char estado2[] = "RJ";
    char codigo2[] = "C02";
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.3;
    float pib2 = 352000000000.0;
    int pontos2 = 38;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação por atributo (escolha aqui)
    // 1 = população, 2 = área, 3 = PIB, 4 = densidade, 5 = PIB per capita
    int atributo = 5;

    float valor1, valor2;
    char nomeAtributo[30];
    int menorVence = 0;

    if (atributo == 1) {
        valor1 = populacao1;
        valor2 = populacao2;
        sprintf(nomeAtributo, "População");
    } else if (atributo == 2) {
        valor1 = area1;
        valor2 = area2;
        sprintf(nomeAtributo, "Área");
    } else if (atributo == 3) {
        valor1 = pib1;
        valor2 = pib2;
        sprintf(nomeAtributo, "PIB");
    } else if (atributo == 4) {
        valor1 = densidade1;
        valor2 = densidade2;
        sprintf(nomeAtributo, "Densidade Populacional");
        menorVence = 1;
    } else {
        valor1 = pibPerCapita1;
        valor2 = pibPerCapita2;
        sprintf(nomeAtributo, "PIB per Capita");
    }

    printf("Comparação de cartas (%s):\n\n", nomeAtributo);
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, valor2);

    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else if ((menorVence && valor1 < valor2) || (!menorVence && valor1 > valor2)) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}
