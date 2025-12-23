#include <stdio.h>

typedef struct {
    char Estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;

    // CAMPO COM INFORÇÃO SOBRE A CARTA1 //
    printf("Por favor insira os dados da carta1 \n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &carta1.Estado);
    printf("Digite um Codigo (ex: A01): \n");
    scanf("%3s", carta1.codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1.cidade);
    printf("Digite o numero da populacao: \n");
    scanf("%d", &carta1.populacao);
    printf("Digite a area por km²: \n");
    scanf("%f", &carta1.area);
    printf("Digite o Pib: \n");
    scanf("%f", &carta1.pib);
    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("Dados da carta1\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("cidade: %s\n", carta1.cidade);
    printf("populacao: %d\n", carta1.populacao);
    printf("area: %.2f km²\n", carta1.area);
    printf("pib: %.2f Trilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    
    // CAMPO COM INFORMAÇÕES DA CARTA 2 //


    printf("Digite dados da carta2 \n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &carta2.Estado);
    printf("Digite um Codigo (ex: A01): \n");
    scanf("%3s", carta2.codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2.cidade);
    printf("Digite o numero da populacao: \n");
    scanf("%d", &carta2.populacao);
    printf("Digite a area por km²: \n");
    scanf("%f", &carta2.area);
    printf("Digite o Pib: \n");
    scanf("%f", &carta2.pib);
    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("Dados da carta2\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("cidade: %s\n", carta2.cidade);
    printf("populacao: %d\n", carta2.populacao);
    printf("area: %.2f km²\n", carta2.area);
    printf("pib: %.2f Trilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
