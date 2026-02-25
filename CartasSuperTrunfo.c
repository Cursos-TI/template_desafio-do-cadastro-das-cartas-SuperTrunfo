#include <stdio.h>

int main() {

    // CARTA 1
    char estado[20] = "Bahia";
    char codigo[10] = "BA071";
    char cidade[20] = "Ilheus";
    int populacao = 189149;
    float area = 1583.0;
    long long int pib = 516362292;
    int pontos = 27;

    // CARTA 2
    char estado2[20] = "Pernambuco";
    char codigo2[10] = "PE081";
    char cidade2[20] = "Recife";
    int populacao2 = 1588376;
    float area2 = 218.84;
    long long int pib2 = 600000000;
    int pontos2 = 35;

    printf("===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %lld\n", pib);
    printf("Pontos: %d\n", pontos);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %lld\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
}

