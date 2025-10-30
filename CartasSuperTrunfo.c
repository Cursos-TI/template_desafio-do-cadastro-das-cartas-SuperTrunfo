#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;
    int atributo1, atributo2; // escolha dos atributos
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    // ===== CADASTRO DAS CARTAS =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (ex: RJ): ");
    fgets(carta1.estado, 30, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = '\0';

    printf("Digite o código da carta (ex: A01): ");
    fgets(carta1.codigo, 10, stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta1.nome, 30, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    while (getchar() != '\n');

    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    while (getchar() != '\n');

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (ex: SP): ");
    fgets(carta2.estado, 30, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = '\0';

    printf("Digite o código da carta (ex: B02): ");
    fgets(carta2.codigo, 10, stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta2.nome, 30, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n');

    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    while (getchar() != '\n');

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // ===== MENU DE ESCOLHA DOS ATRIBUTOS =====
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Segundo menu dinâmico (não repete o atributo anterior)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue; // não mostra a opção já escolhida
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // ===== PRIMEIRO ATRIBUTO =====
    switch (atributo1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            valor1_c1 = carta1.pontos_turisticos;
            valor1_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            valor1_c1 = carta1.densidade;
            valor1_c2 = carta2.densidade;
            break;
        case 6:
            valor1_c1 = carta1.pib_per_capita;
            valor1_c2 = carta2.pib_per_capita;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    // ===== SEGUNDO ATRIBUTO =====
    switch (atributo2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            valor2_c1 = carta1.pontos_turisticos;
            valor2_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            valor2_c1 = carta1.densidade;
            valor2_c2 = carta2.densidade;
            break;
        case 6:
            valor2_c1 = carta1.pib_per_capita;
            valor2_c2 = carta2.pib_per_capita;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    // ===== EXIBIÇÃO DOS VALORES =====
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");

    printf("\n%s vs %s\n", carta1.nome, carta2.nome);

    // Operador ternário usado para decidir vencedores
    int vitoria1 = 0, vitoria2 = 0;

    // Primeiro atributo
    if (atributo1 == 5) { // Densidade → menor vence
        printf("Atributo 1: Densidade Demográfica\n");
        printf("%.2f hab/km² x %.2f hab/km²\n", valor1_c1, valor1_c2);
        vitoria1 = (valor1_c1 < valor1_c2) ? 1 : (valor1_c1 > valor1_c2 ? 2 : 0);
    } else {
        printf("Atributo 1: ");
        switch (atributo1) {
            case 1: printf("População\n"); break;
            case 2: printf("Área\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 6: printf("PIB per Capita\n"); break;
        }
        printf("%.2f x %.2f\n", valor1_c1, valor1_c2);
        vitoria1 = (valor1_c1 > valor1_c2) ? 1 : (valor1_c1 < valor1_c2 ? 2 : 0);
    }

    // Segundo atributo
    if (atributo2 == 5) { // Densidade → menor vence
        printf("\nAtributo 2: Densidade Demográfica\n");
        printf("%.2f hab/km² x %.2f hab/km²\n", valor2_c1, valor2_c2);
        vitoria2 = (valor2_c1 < valor2_c2) ? 1 : (valor2_c1 > valor2_c2 ? 2 : 0);
    } else {
        printf("\nAtributo 2: ");
        switch (atributo2) {
            case 1: printf("População\n"); break;
            case 2: printf("Área\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 6: printf("PIB per Capita\n"); break;
        }
        printf("%.2f x %.2f\n", valor2_c1, valor2_c2);
        vitoria2 = (valor2_c1 > valor2_c2) ? 1 : (valor2_c1 < valor2_c2 ? 2 : 0);
    }

    // ===== SOMA DOS ATRIBUTOS =====
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n");
    if (soma1 > soma2)
        printf("%s venceu a rodada!\n", carta1.nome);
    else if (soma2 > soma1)
        printf("%s venceu a rodada!\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}