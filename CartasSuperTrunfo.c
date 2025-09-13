#include <stdio.h>
#include <string.h>

#define ESTADOS 8
#define CIDADES 4
#define MAX_NOME 50

// Estrutura que representa uma cidade
typedef struct {
    char codigo[4];       // Código da carta, ex: A01
    char nome[MAX_NOME];  // Nome da cidade
    int populacao;        // População
    float area;           // Área em km²
    double pib;           // PIB em bilhões
    int pontos_turisticos;// Número de pontos turísticos
} Cidade;

int main() {
    Cidade cartas[ESTADOS * CIDADES];
    char letrasEstados[ESTADOS] = {'A','B','C','D','E','F','G','H'};
    int i, j, index = 0;

    printf("=== Cadastro de Cartas do Super Trunfo - Países ===\n\n");

    for(i = 0; i < ESTADOS; i++) {
        for(j = 1; j <= CIDADES; j++) {
            printf("Cadastro da cidade do Estado %c, Cidade %d\n", letrasEstados[i], j);

            // Gerando código da carta
            sprintf(cartas[index].codigo, "%c0%d", letrasEstados[i], j);

            // Lendo dados da cidade
            printf("Nome da cidade: ");
            scanf(" %[^\n]s", cartas[index].nome); // Lê até o enter

            printf("População: ");
            scanf("%d", &cartas[index].populacao);

            printf("Área (km²): ");
            scanf("%f", &cartas[index].area);

            printf("PIB (bilhões): ");
            scanf("%lf", &cartas[index].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[index].pontos_turisticos);

            printf("\n");
            index++;
        }
    }

    // Exibindo todas as cartas cadastradas
    printf("=== Cartas Cadastradas ===\n\n");
    for(i = 0; i < ESTADOS * CIDADES; i++) {
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("-----------------------------\n");
    }

    return 0;
}
