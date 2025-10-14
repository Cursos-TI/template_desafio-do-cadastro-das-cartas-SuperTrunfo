#include <stdio.h>
#include "cartas.h"
#include "types/cidades.h"

void cadastrarCidade(Cidade *cidade) {
    printf("Cadastro de Cidade:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade->nome);
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &cidade->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontosTuristicos);
}

void exibirCidade(const Cidade *cidade) {
    printf("\nInformações da Cidade:\n");
    printf("Nome: %s\n", cidade->nome);
    printf("População: %d\n", cidade->populacao);
    printf("Área: %.2f km²\n", cidade->area);
    printf("PIB: %.2f milhões\n", cidade->pib);
    printf("Número de Pontos Turísticos: %d\n", cidade->pontosTuristicos);
}